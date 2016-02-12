#include <functional>
#include "luaexecutor.h"
#include <iostream>
#include <QMessageBox>
#include <QPlainTextEdit>

static bool quit_any_execution;

static LuaWorker* ugly_pointer;

static void LineHookFunc(lua_State *L, lua_Debug *ar)
{
    ugly_pointer->checkIfQuitRequested(L,ar);
}

static int l_my_print(lua_State* L)
{
    for (int i=1; i <= lua_gettop(L); i++)
    {
        if (lua_isstring(L, i))
        {
             ugly_pointer->print( lua_tostring(L, i) );
        }
        else {     }
    }

    return 0;
}

static const struct luaL_Reg printlib [] = {
{"print", l_my_print},
{NULL, NULL} /* end of array */
};

void LuaWorker::doWork(const QString &script)
{
    lua_State* lua_state = luaL_newstate();

    // load Lua libraries
    static const luaL_Reg lualibs[] =
    {
        {"base", luaopen_base},
        {"io", luaopen_io},
        {NULL, NULL}
    };
    const luaL_Reg *lib = lualibs;
    for(; lib->func != NULL; lib++)
    {
        luaL_requiref(lua_state, lib->name, lib->func, 1);
        lua_settop(lua_state, 0);
    }

    lua_getglobal(lua_state, "_G");
    luaL_setfuncs(lua_state, printlib, 0);
    lua_pop(lua_state, 1);


    // execute
    quit_any_execution = false;

    //using namespace std::placeholders;
    //std::function<void(lua_State*, lua_Debug *)> hook = std::bind(&LuaWorker::checkIfQuitRequested,this, _1, _2);

    ugly_pointer = this;

    lua_sethook(lua_state, &LineHookFunc , LUA_MASKLINE, 0);
    lua_sethook(lua_state, &LineHookFunc, LUA_MASKCOUNT, 10);
    int status = luaL_dostring( lua_state, script.toStdString().c_str() );

    QString msg;

    if ( status!=0 )
    {
        msg = lua_tostring(lua_state, -1);
    }
    else {
        msg = "Script executed";
    }

    lua_close( lua_state );

    emit resultReady(status, msg);

}

void LuaWorker::checkIfQuitRequested(lua_State *L, lua_Debug *ar)
{
    if(quit_any_execution == true)
        luaL_error(L, "Script interrupted by the user");
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

        if( reply == QMessageBox::Yes)
            quit_any_execution = true;
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


