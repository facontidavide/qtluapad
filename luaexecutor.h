#ifndef LUAEXECUTOR_H
#define LUAEXECUTOR_H

#include <QThread>
extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

class LuaWorker : public QThread
{
    Q_OBJECT

public slots:
    void doWork(const QString &script);

signals:
    void resultReady(const int status, const QString &result);
    void finished();
    void print(const QString&);

public:
    void checkIfQuitRequested(lua_State *L, lua_Debug *ar);

private:
    QString script;
};




class LuaExecutor : public QObject
{
    Q_OBJECT
    QThread workerThread;
public:
    LuaExecutor();

    ~LuaExecutor() {
        workerThread.quit();
        workerThread.wait();
    }

    void pushScript(const QString &script);

public slots:
    void handleResults(const int status, const QString &result);

signals:
    void executeScript(const QString &script);
    void printOutput(const QString &output);
private:
    bool running;
};

#endif // LUAEXECUTOR_H
