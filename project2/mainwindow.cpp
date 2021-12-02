#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _dataStream = new DataStream(this);

    if(_dataStream->DbConnect())
    {
        qDebug() << "Database connected : SUCCESS";
        _dataStream->TableCreate();
    }
    else
        qDebug() << "Database connected : FAILURE";

    for(int i=0; i<2; i++)
    {
        _thread[i] = new QThread;
        _workerProcess[i] = new WorkerProcess;
        _workerProcess[i]->moveToThread(_thread[i]);
        connect(_thread[i], SIGNAL(started()), _workerProcess[i], SLOT(MainLoop()));
        connect(_workerProcess[i], SIGNAL(Finished()), _thread[i], SLOT(quit()), Qt::DirectConnection);
        _thread[i]->start();
    }
    connect(_workerProcess[0], SIGNAL(SendThread1()), this, SLOT(RecvThread1()));
    connect(_workerProcess[1], SIGNAL(SendThread2(double, double)), this, SLOT(RecvThread2(double, double)));
    //connect {1 sendthread1()} in {2 workerprocess} class
    //run {4 RecvThread1} in {3 this} class
    connect(_dataStream, SIGNAL(SendReadData(double, double, double, double ,double, double)), this,
                                            SLOT(RecvReadData(double, double, double, double, double, double)));
    _workerProcess[0]->ReqMethod(WorkerProcess::THREAD1);
    _workerProcess[1]->ReqMethod(WorkerProcess::THREAD2);
}

void MainWindow::RecvThread1()
{
    qDebug() << "THREAD 1";
}

void MainWindow::RecvThread2(double temp, double humi)
{
    qDebug() << "THREAD 2";
    if (temp < 0 || humi < 0)
            return ;
    qDebug() << temp << ", " << humi;
    ui->labTempValue->setText(QString::number(temp));
    ui->labHumiValue->setText(QString::number(humi));
    _dataStream->SaveData(temp, humi);
    _dataStream->ReadData();
}

void MainWindow::RecvReadData(double maxTemp, double minTemp, double avgTemp, double maxHumi, double minHumi, double avgHumi)
{
    qDebug() << maxTemp << ", " << minTemp << ", " << avgTemp;
    qDebug() << maxHumi << ", " << minHumi << ", " << avgHumi;
    ui->labTempValue_min->setText(QString::number(minTemp));
    ui->labHumiValue_min->setText(QString::number(minHumi));
    ui->labTempValue_max->setText(QString::number(maxTemp));
    ui->labHumiValue_max->setText(QString::number(maxHumi));
    ui->labTempValue_avg->setText(QString::number(avgTemp));
    ui->labHumiValue_avg->setText(QString::number(avgHumi));

    if (avgTemp > setTemp)
        ui->labSysStatus->setText("OVER TEMPERTURE");
    else
        ui->labSysStatus->setText("DEFAULT");
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::on_btnRunStatus_released()
{

}*/

void MainWindow::on_pushButton_released()
{
    qDebug() << ui->spinBox->value();
    setTemp = ui->spinBox->value();
}
