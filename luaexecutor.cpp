#include <functional>
#include "luaexecutor.h"
#include <iostream>
#include <QMessageBox>
#include <QPlainTextEdit>
#include "include/LuaContext.hpp"

bool quit_any_execution;

static LuaWorker* ugly_pointer;



static int l_my_print(lua_State* L)
{
    QString out;
    for (int i=1; i <= lua_gettop(L); i++)
    {
        if (lua_isstring(L, i))
        {
            out += lua_tostring(L, i) ;
        }
        else if (lua_isnumber(L, i)){
         out += lua_tonumber(L, i) ;
        }
    }
    ugly_pointer->print(out);
    return 0;
}

static const struct luaL_Reg printlib [] = {
{"print", l_my_print},
{NULL, NULL} /* end of array */
};


void LuaWorker::doWork(const QString &script)
{
    LuaContext context;

    quit_any_execution = false;
    context.insertKillSwitch( &quit_any_execution );

    //-------- overload function print ------
    ugly_pointer = this;
    lua_getglobal( context.getLuaStateRaw() , "_G");
    luaL_setfuncs(context.getLuaStateRaw(), printlib, 0);
    lua_pop(context.getLuaStateRaw(), 1);
    //--------

    QString  msg = "Script executed";
    int status = 0;

    try{
        context.executeCode( script.toStdString().c_str() );
    }
    catch(const std::runtime_error& e)
    {
       msg = e.what();
       status = -1;
    }

    emit resultReady(status, msg);

}



LuaExecutor::LuaExecutor()
{
    running = false;
    LuaWorker *worker = new LuaWorker;
    worker->moveToThread(&workerThread);

    connect(&workerThread, &QThread::finished,      worker, &QObject::deleteLater);

    connect(this, &LuaExecutor::executeScript,      worker, &LuaWorker::doWork);
    connect(worker, &LuaWorker::resultReady,        this, &LuaExecutor::handleResults);

    connect(worker, &LuaWorker::print,              this, &LuaExecutor::printOutput);

    workerThread.start();
}

void LuaExecutor::pushScript(const QString &script)
{
    if( running ){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(0, "Warning", "Previous script still running.\nDo you want to stop it?",  QMessageBox::Yes| QMessageBox::No);

        if( reply == QMessageBox::Yes){
            quit_any_execution = true;
        }
    }
    else{
        running = true;
        emit printOutput("starting new script\n");
        emit executeScript( script );
    }
}

void LuaExecutor::handleResults(const int status, const QString &result)
{
    if( status == 0)
    {
        QMessageBox::information(0,"Done", "Script executed correctly", QMessageBox::Ok);
    }
    else{
        QMessageBox::warning(0,"Error", result, QMessageBox::Ok);
    }
    running = false;
}


