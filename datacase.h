#ifndef DATACASE_H
#define DATACASE_H

#include<QString>


class DataCase
{
public:
    QString lYear, rYear;
    QString lMonth, rMonth;
    QString lDateSave, rDateSave;
    QString lInternet, rInternetSum;
    QString lHouseMaint, rHouseMaintSum;
    QString lGas, lGasPrev, rGasPrev, lGasActual, rGasActual, lGasDiff, rGasDiff, lGasSum, rGasSum;
    QString lElec, lElecPrev, rElecPrev, lElecActual, rElecActual, lElecDiff, rElecDiff, lElecSum, rElecSum;
    QString lHWater, lHWaterPrev, rHWaterPrev, lHWaterActual, rHWaterActual, lHWaterDiff, rHWaterDiff, lHWaterSum,
            rHWaterSum, lHWaterOutTarif, rHWaterOutTarif, lHWaterOutSum, rHWaterOutSum;
    QString lCWater, lCWaterPrev, rCWaterPrev, lCWaterActual, rCWaterActual, lCWaterDiff, rCWaterDiff, lCWaterSum,
            rCWaterSum, lCWaterOutTarif, rCWaterOutTarif, lCWaterOutSum, rCWaterOutSum;
public:
    DataCase();
    ~DataCase();
    QString& initData(QString &str1, QString str2);
    void initCase();
};

#endif // DATACASE_H
