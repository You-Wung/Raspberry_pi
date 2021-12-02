#ifndef DATASTREAM_H
#define DATASTREAM_H

#include <QObject>
#include <QtSql>
#include <QString>
#include <QVariant>

class DataStream : public QObject
{
    Q_OBJECT
public:
    explicit DataStream(QObject *parent = nullptr);

       QSqlDatabase db;
       bool DbConnect();
       void DbDisConn();
       void TableCreate();
       void SaveData(double temp, double humi);
       void ReadData();
signals:
        void SendReadData(const double maxTemp, const double minTemp, const double avgTemp,
                          const double maxHumi, const double minHumi, const double avgHumi);
public slots:
};

#endif // DATASTREAM_H
