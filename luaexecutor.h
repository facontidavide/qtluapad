#ifndef LUAEXECUTOR_H
#define LUAEXECUTOR_H

#include <QThread>



class LuaWorker : public QThread
{
    Q_OBJECT

public slots:
    void doWork(const QString &script);

signals:
    void resultReady(const int status, const QString &result);
    void finished();
    void print(const QString &);

private:
    QString script;

    void printProxy(const std::string & msg)
    {
        emit print( QString(msg.c_str()) );
    }
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
