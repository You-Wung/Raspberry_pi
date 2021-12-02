#ifndef WORKERPROCESS_H
#define WORKERPROCESS_H

#include <QObject>
#include <QMutex>
#include <QThread>
#include <QWaitCondition>
#include <QEventLoop>
#include <QDebug>
#include <QTimer>

#include <wiringPi.h>
#define PIN_DHT         3
#define MAX_TIMINGS     85

class WorkerProcess : public QObject
{
    Q_OBJECT
public:
    explicit WorkerProcess(QObject *parent = nullptr);
    enum Method {
        THREAD1 = 1,
        THREAD2 = 2
    };

    void ReqMethod(Method method);
    void Abort();

public slots:
    void MainLoop();
private:
    QMutex          _mutex;
    Method          _method;
    QWaitCondition  _condition;
    int             th1Rate = 1000;
    int             th2Rate = 3000;
    bool            _abort;
    bool            _interrupt;
    double          temperature = -999.9;
    double          humidity    = -999.9;

    void doThread1();
    void doThread2();
    void ReadDht_sensor();

signals:
    void Finished();
    void SendThread1();
    void SendThread2(const double &temperature, const double &humidity);
};

#endif // WORKERPROCESS_H
