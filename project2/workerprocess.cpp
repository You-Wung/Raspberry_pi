#include "workerprocess.h"

WorkerProcess::WorkerProcess(QObject *parent) : QObject(parent)
{
    _abort = false;
    _interrupt = false;
}

void WorkerProcess::doThread1()
{
    while (true)
    {
        _mutex.lock();
        bool abort = _abort;
        bool interrupt = _interrupt;
        _mutex.unlock();

        if (abort || interrupt) break ;

        QEventLoop loop;
        QTimer::singleShot(th1Rate, &loop, SLOT(quit()));
        loop.exec();

        emit SendThread1();
    }
}

void WorkerProcess::doThread2()
{
    wiringPiSetupGpio();
    while (true)
    {
        _mutex.lock();
        bool abort = _abort;
        bool interrupt = _interrupt;
        _mutex.unlock();

        if (abort || interrupt) break ;

        QEventLoop loop;
        QTimer::singleShot(th2Rate, &loop, SLOT(quit()));
        loop.exec();

        ReadDht_sensor();
        emit SendThread2(temperature, humidity);
    }
}

void WorkerProcess::ReadDht_sensor()
{
    int         data[5];
    uint8_t     lastState = HIGH;
    uint8_t     counter = 0;
    uint8_t     j = 0;

    data[0] = data[1] = data[2] = data[3] = data[4] = 0;
    pinMode(PIN_DHT, OUTPUT);
    digitalWrite(PIN_DHT, HIGH);
    delay(10);
    digitalWrite(PIN_DHT, LOW);
    delay(18);
    digitalWrite(PIN_DHT, HIGH);
    delayMicroseconds(40);
    pinMode(PIN_DHT, INPUT);
    for (int i = 0; i < MAX_TIMINGS; i++)
    {
        counter = 0;
        while (digitalRead(PIN_DHT) == lastState)
        {
            counter++;
            delayMicroseconds(2);
            if (counter == 255)
                break ;
        }
        lastState = static_cast<uint8_t>(digitalRead(PIN_DHT));
        if (counter == 255)
            break ;
        if((i >= 4) && (i % 2 == 0))
        {
            data[j / 8] <<= 1;
            if (counter > 16)
                data[j / 8] |= 1;
            j++;
        }
    }

    if((j >= 40) && ((data[4] == data[0] + data[1] + data[2] + data[3]) & 0xFF))
    {
        humidity = static_cast<double>(((data[0] << 8) + data[1]) / 10);
        if (humidity > 100)
              humidity = data[0];
        temperature = static_cast<double>(((data[2] & 0x7F) << 8) + data[3] / 10);
        if (temperature > 125)
            temperature = data[2];
        if(data[2] & 0x80)
            temperature = -temperature;
        qDebug() << "Temp: " << temperature << ", Humi: " << humidity;
    }
    else
    {
        qDebug() << "Sensing Error";
    }
}

void WorkerProcess::MainLoop()
{
    forever {
         _mutex.lock();
        if (!_interrupt && !_abort) _condition.wait(&_mutex);
        _interrupt = false;

        if (_abort)
        {
            _mutex.unlock();

            emit Finished();
            return ;
        }
        Method method = _method;
        _mutex.unlock();

        switch (method)
        {
            case THREAD1:
                doThread1();
                break ;
            case THREAD2:
                doThread2();
                break ;
        }
    }
}

void WorkerProcess::ReqMethod(Method method)
{
    QMutexLocker locker(&_mutex);
    _interrupt = true;
    _method = method;
    _condition.wakeOne();
}

void WorkerProcess::Abort()
{
    QMutexLocker locker(&_mutex);
    _abort = true;
    _condition.wakeOne();
}
