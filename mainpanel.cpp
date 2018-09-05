#include "mainpanel.h"

MainPanel::MainPanel(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(200, 200, 800, 600);
    createObjects();
    initObjects();
}

MainPanel::~MainPanel()
{
    deleteObjects();
}

void MainPanel::createObjects()
{
    dc = new DataCase;

    font1 = new QFont("Arial Black", 16);
    font2 = new QFont("Arial Black", 10);
    font3 = new QFont("Arial", 10);

    qLTitle = new QLabel(this);
    qLYear = new QLabel(this);
    qLMonth = new QLabel(this);
    qLDateSave = new QLabel(this);
    qLGas = new QLabel(this);
    qLElec = new QLabel(this);
    qLInternet = new QLabel(this);
    qLHouseMaint = new QLabel(this);
    qLHWater = new QLabel(this);
    qLCWater = new QLabel(this);

    qLEYear = new QLineEdit(this);
    qLEMonth = new QLineEdit(this);
    qLEDataSave = new QLineEdit(this);
}

void MainPanel::deleteObjects()
{
    delete dc; dc = nullptr;

    delete font1; font1 = nullptr;
    delete font2; font2 = nullptr;
    delete font3; font3 = nullptr;

    delete qLTitle; qLTitle = nullptr;
    delete qLYear; qLYear = nullptr;
    delete qLMonth; qLMonth = nullptr;
    delete qLDateSave; qLDateSave = nullptr;
    delete qLGas; qLGas = nullptr;
    delete qLElec; qLElec = nullptr;
    delete qLInternet; qLInternet = nullptr;
    delete qLHouseMaint; qLHouseMaint = nullptr;
    delete qLHWater; qLHWater = nullptr;
    delete qLCWater; qLCWater = nullptr;

    delete qLEYear; qLEYear = nullptr;
    delete qLEMonth; qLEMonth = nullptr;
    delete qLEDataSave; qLEDataSave = nullptr;
}

void MainPanel::initObjects()
{
    int y = 100;
    int xa = 5;

    dc->initCase();

    qLTitle->setGeometry(150, 5, 500, 50);
    qLTitle->setText("Отчёт Коммунальных Платежей");
    qLTitle->setFont(*font1);

    qLYear->setGeometry(20+xa, 10+y, 300, 30);
    qLYear->setText(dc->lYear);
    qLYear->setFont(*font2);

    qLEYear->setGeometry(73, 10+y, 60, 25);
    qLEYear->setFont(*font3);

    qLMonth->setGeometry(20+xa, 50+y, 300, 30);
    qLMonth->setText(dc->lMonth);
    qLMonth->setFont(*font2);

    qLEMonth->setGeometry(128, 50+y, 120, 25);
    qLEMonth->setFont(*font3);

    qLDateSave->setGeometry(20+xa, 90+y, 300, 30);
    qLDateSave->setText(dc->lDateSave);
    qLDateSave->setFont(*font2);

    qLEDataSave->setGeometry(133, 90+y, 120, 25);
    qLEDataSave->setFont(*font3);

    qLGas->setGeometry(20+xa, 130+y, 300, 30);
    qLGas->setText(dc->lGas);
    qLGas->setFont(*font2);

    qLElec->setGeometry(20+xa, 170+y, 300, 30);
    qLElec->setText(dc->lElec);
    qLElec->setFont(*font2);

    qLInternet->setGeometry(20+xa, 210+y, 300, 30);
    qLInternet->setText(dc->lInternet);
    qLInternet->setFont(*font2);

    qLHouseMaint->setGeometry(20+xa, 250+y, 300, 30);
    qLHouseMaint->setText(dc->lHouseMaint);
    qLHouseMaint->setFont(*font2);

    qLHWater->setGeometry(20+xa, 290+y, 300, 30);
    qLHWater->setText(dc->lHWater);
    qLHWater->setFont(*font2);

    qLCWater->setGeometry(20+xa, 330+y, 300, 30);
    qLCWater->setText(dc->lCWater);
    qLCWater->setFont(*font2);
}

