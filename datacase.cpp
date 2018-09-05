#include "datacase.h"

DataCase::DataCase()
{

}

DataCase::~DataCase()
{

}

QString& DataCase::initData(QString &qStr1, QString qStr2)
{
    qStr1 = qStr2;
    return qStr1;
}

void DataCase::initCase()
{
    initData(lYear, "Год: ");
    initData(lMonth, "За месяц: ");
    initData(lDateSave, "Сохранён: ");
    initData(lGas, "Потребление газа: ");
    initData(lElec, "Потребление электроенергии: ");
    initData(lInternet, "Услуги Интернет: ");
    initData(lHouseMaint, "Содержание дома: ");
    initData(lHWater, "Горячее водоснабжениее: ");
    initData(lCWater, "Холодное водоснабжениее: ");
}

