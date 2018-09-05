#ifndef MAINPANEL_H
#define MAINPANEL_H

#include <QWidget>
#include <QTableView>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include "datacase.h"

class MainPanel : public QWidget
{
    Q_OBJECT
protected:
    DataCase *dc;

    QFont *font1;
    QFont *font2;
    QFont *font3;

    QLabel *qLTitle;
    QLabel *qLYear;
    QLabel *qLMonth;
    QLabel *qLDateSave;
    QLabel *qLGas;
    QLabel *qLElec;
    QLabel *qLInternet;
    QLabel *qLHouseMaint;
    QLabel *qLHWater;
    QLabel *qLCWater;

    QLineEdit *qLEYear;
    QLineEdit *qLEMonth;
    QLineEdit *qLEDataSave;

    QPushButton *qButtonOK;
    QPushButton *qButtonCancel;

public:
    MainPanel(QWidget *parent = nullptr);
    ~MainPanel();
    void createObjects();
    void initObjects();
    void deleteObjects();
};

#endif // MAINPANEL_H
