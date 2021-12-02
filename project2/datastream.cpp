#include "datastream.h"

bool DataStream::DbConnect()
{
    bool result = false;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setConnectOptions();
    db.setDatabaseName("testdb");
    db.setHostName("localhost");
    db.setUserName("wazoski");
    db.setPassword("1234");

    if(db.open()) result = true;

    return result;
}

void DataStream::DbDisConn()
{
    QString connectedName;
    connectedName = db.connectionName();
    db.close();

    db = QSqlDatabase();
    db.removeDatabase(connectedName);
}

void DataStream::TableCreate()
{
    QSqlQuery query;
    QString strQuery;

    if (db.isOpen())
    {
        db.transaction();

        if (!db.tables().contains(QLatin1String("thValue")))
        {
            strQuery = "CREATE TABLE IF NOT EXISTS thValue"
                       "( id INTEGER UNIQUE PRIMARY KEY AUTO_INCREMENT"
                       ", tempValue REAL, humiValue REAL )";

            query.prepare(strQuery);

            if (query.exec()) qDebug() << "CREATE TABLE : SUCCESS";
            else qDebug() << "CREATE TABLE : FAILURE";
        }
        db.commit();
        DbDisConn();
    }
}

void DataStream::SaveData(double temp, double humi)
{
    DbConnect();

    if (db.isOpen())
    {
        db.transaction();

        QSqlQuery query;
        QString strQuery;

        if (temp < 0 || humi < 0)
            return ;
        if (db.tables().contains(QLatin1String("thValue")))
        {
            strQuery = QString("INSERT INTO thValue(tempValue, humiValue) "
                               "VALUES (%1, %2)").arg(temp).arg(humi);

            query.prepare(strQuery);

            if (query.exec()) qDebug() << "SAVE OK";
            else qDebug() << "SAVE FAIL";
        }

        db.commit();
        DbDisConn();
    }
}

DataStream::DataStream(QObject *parent) : QObject(parent)
{

}

void DataStream::ReadData()
{
    DbConnect();

    double maxTemp, minTemp, avgTemp, maxHumi, minHumi, avgHumi;
    maxTemp = minTemp = avgTemp = maxHumi = minHumi = avgHumi = -999.9;

    if (db.isOpen())
    {
        QSqlQuery   query;
        QString     strQuery;

        if (db.tables().contains(QLatin1String("thValue")))
        {
            strQuery = "select  max(tempValue), min(tempValue), avg(tempValue), "
                       "        max(HumiValue), min(HumiValue), avg(HumiValue)"
                       "from thValue";
            query.prepare(strQuery);
            if (query.exec())
            {
                while (query.next())
                {
                    maxTemp = query.value(0).toDouble();
                    minTemp = query.value(1).toDouble();
                    avgTemp = query.value(2).toDouble();
                    maxHumi = query.value(3).toDouble();
                    minHumi = query.value(4).toDouble();
                    avgHumi = query.value(5).toDouble();
                }
                qDebug() << "READ SUCCESS";
            }
            else qDebug() << "READ ERROR";
        }
        DbDisConn();
    }

    emit SendReadData(maxTemp, minTemp, avgTemp, maxHumi, minHumi, avgHumi);
 }

//void DataStream::SendReadData(const double maxTemp, const double minTemp, const double avgTemp,
//                          const double maxHumi, const double minHumi, const double avgHumi)
//{

//}













