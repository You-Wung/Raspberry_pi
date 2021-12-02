#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMutex>
#include <QThread>
#include <QTimer>
#include <QDebug>
#include "workerprocess.h"
#include "datastream.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QThread *_thread[2];
    WorkerProcess *_workerProcess[2];
    DataStream *_dataStream;
    int setTemp = 0;

private slots:
    void RecvThread1();
    void RecvThread2(double temp, double humi);
    void RecvReadData(double maxTemp, double minTemp, double avgTemp, double maxHumi, double minHumi, double avgHumi);
//    void on_pushButton_released();
//    void on_btnRunStatus_released();
    void on_pushButton_released();
};

#endif // MAINWINDOW_H
