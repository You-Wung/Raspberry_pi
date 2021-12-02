/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnRunStatus;
    QGroupBox *gBoxSensor;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labTempValue;
    QLabel *labTempTitle;
    QLabel *labHumiTitle;
    QLabel *labHumiValue;
    QLabel *labSysStatus;
    QGroupBox *gBoxSensor_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *labTempValue_min;
    QLabel *labHumiValue_min;
    QLabel *labHumiTitle_min;
    QLabel *labTempTitle_min;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *labHumiTitle_max;
    QLabel *labHumiValue_max;
    QLabel *labTempValue_max;
    QLabel *labTempTitle_max;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *labHumiValue_avg;
    QLabel *labTempValue_avg;
    QLabel *labHumiTitle_avg;
    QLabel *labTempTitle_avg;
    QGroupBox *gBoxSensor_3;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QLabel *labSysStatus_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1013, 615);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnRunStatus = new QPushButton(centralWidget);
        btnRunStatus->setObjectName(QStringLiteral("btnRunStatus"));
        btnRunStatus->setGeometry(QRect(630, 370, 90, 81));
        gBoxSensor = new QGroupBox(centralWidget);
        gBoxSensor->setObjectName(QStringLiteral("gBoxSensor"));
        gBoxSensor->setGeometry(QRect(10, 0, 361, 131));
        gBoxSensor->setStyleSheet(QLatin1String("QGroupBox#gBoxSensor{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #E0E0E0, stop: 0.6 #FFFFFF);\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"}\n"
"QGroupBox::title{\n"
"background-color: transparent;\n"
"subcontrol-position: top center;\n"
"padding:2 13px;\n"
"}"));
        gridLayoutWidget = new QWidget(gBoxSensor);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 301, 85));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(30, 0, 30, 0);
        labTempValue = new QLabel(gridLayoutWidget);
        labTempValue->setObjectName(QStringLiteral("labTempValue"));
        QFont font;
        font.setPointSize(20);
        labTempValue->setFont(font);

        gridLayout->addWidget(labTempValue, 0, 1, 1, 1);

        labTempTitle = new QLabel(gridLayoutWidget);
        labTempTitle->setObjectName(QStringLiteral("labTempTitle"));
        labTempTitle->setFont(font);

        gridLayout->addWidget(labTempTitle, 0, 0, 1, 1);

        labHumiTitle = new QLabel(gridLayoutWidget);
        labHumiTitle->setObjectName(QStringLiteral("labHumiTitle"));
        labHumiTitle->setFont(font);

        gridLayout->addWidget(labHumiTitle, 1, 0, 1, 1);

        labHumiValue = new QLabel(gridLayoutWidget);
        labHumiValue->setObjectName(QStringLiteral("labHumiValue"));
        labHumiValue->setFont(font);

        gridLayout->addWidget(labHumiValue, 1, 1, 1, 1);

        labSysStatus = new QLabel(centralWidget);
        labSysStatus->setObjectName(QStringLiteral("labSysStatus"));
        labSysStatus->setGeometry(QRect(180, 360, 221, 22));
        gBoxSensor_2 = new QGroupBox(centralWidget);
        gBoxSensor_2->setObjectName(QStringLiteral("gBoxSensor_2"));
        gBoxSensor_2->setGeometry(QRect(100, 160, 801, 161));
        gBoxSensor_2->setStyleSheet(QLatin1String("QGroupBox#gBoxSensor_2{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #E0E0E0, stop: 0.6 #FFFFFF);\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"}\n"
"QGroupBox::title{\n"
"background-color: transparent;\n"
"subcontrol-position: top center;\n"
"padding:2 13px;\n"
"}"));
        gridLayoutWidget_3 = new QWidget(gBoxSensor_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 40, 241, 91));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_3->setHorizontalSpacing(3);
        gridLayout_3->setVerticalSpacing(5);
        gridLayout_3->setContentsMargins(30, 0, 30, 0);
        labTempValue_min = new QLabel(gridLayoutWidget_3);
        labTempValue_min->setObjectName(QStringLiteral("labTempValue_min"));
        labTempValue_min->setFont(font);

        gridLayout_3->addWidget(labTempValue_min, 0, 1, 1, 1);

        labHumiValue_min = new QLabel(gridLayoutWidget_3);
        labHumiValue_min->setObjectName(QStringLiteral("labHumiValue_min"));
        labHumiValue_min->setFont(font);

        gridLayout_3->addWidget(labHumiValue_min, 1, 1, 1, 1);

        labHumiTitle_min = new QLabel(gridLayoutWidget_3);
        labHumiTitle_min->setObjectName(QStringLiteral("labHumiTitle_min"));
        labHumiTitle_min->setFont(font);

        gridLayout_3->addWidget(labHumiTitle_min, 1, 0, 1, 1);

        labTempTitle_min = new QLabel(gridLayoutWidget_3);
        labTempTitle_min->setObjectName(QStringLiteral("labTempTitle_min"));
        labTempTitle_min->setFont(font);

        gridLayout_3->addWidget(labTempTitle_min, 0, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(gBoxSensor_2);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(300, 40, 211, 91));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_4->setHorizontalSpacing(3);
        gridLayout_4->setVerticalSpacing(5);
        gridLayout_4->setContentsMargins(30, 0, 30, 0);
        labHumiTitle_max = new QLabel(gridLayoutWidget_4);
        labHumiTitle_max->setObjectName(QStringLiteral("labHumiTitle_max"));
        labHumiTitle_max->setFont(font);

        gridLayout_4->addWidget(labHumiTitle_max, 1, 0, 1, 1);

        labHumiValue_max = new QLabel(gridLayoutWidget_4);
        labHumiValue_max->setObjectName(QStringLiteral("labHumiValue_max"));
        labHumiValue_max->setFont(font);

        gridLayout_4->addWidget(labHumiValue_max, 1, 1, 1, 1);

        labTempValue_max = new QLabel(gridLayoutWidget_4);
        labTempValue_max->setObjectName(QStringLiteral("labTempValue_max"));
        labTempValue_max->setFont(font);

        gridLayout_4->addWidget(labTempValue_max, 0, 1, 1, 1);

        labTempTitle_max = new QLabel(gridLayoutWidget_4);
        labTempTitle_max->setObjectName(QStringLiteral("labTempTitle_max"));
        labTempTitle_max->setFont(font);

        gridLayout_4->addWidget(labTempTitle_max, 0, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(gBoxSensor_2);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(550, 40, 231, 91));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_5->setHorizontalSpacing(3);
        gridLayout_5->setVerticalSpacing(5);
        gridLayout_5->setContentsMargins(30, 0, 30, 0);
        labHumiValue_avg = new QLabel(gridLayoutWidget_5);
        labHumiValue_avg->setObjectName(QStringLiteral("labHumiValue_avg"));
        labHumiValue_avg->setFont(font);

        gridLayout_5->addWidget(labHumiValue_avg, 1, 1, 1, 1);

        labTempValue_avg = new QLabel(gridLayoutWidget_5);
        labTempValue_avg->setObjectName(QStringLiteral("labTempValue_avg"));
        labTempValue_avg->setFont(font);

        gridLayout_5->addWidget(labTempValue_avg, 0, 1, 1, 1);

        labHumiTitle_avg = new QLabel(gridLayoutWidget_5);
        labHumiTitle_avg->setObjectName(QStringLiteral("labHumiTitle_avg"));
        labHumiTitle_avg->setFont(font);

        gridLayout_5->addWidget(labHumiTitle_avg, 1, 0, 1, 1);

        labTempTitle_avg = new QLabel(gridLayoutWidget_5);
        labTempTitle_avg->setObjectName(QStringLiteral("labTempTitle_avg"));
        labTempTitle_avg->setFont(font);

        gridLayout_5->addWidget(labTempTitle_avg, 0, 0, 1, 1);

        gBoxSensor_3 = new QGroupBox(centralWidget);
        gBoxSensor_3->setObjectName(QStringLiteral("gBoxSensor_3"));
        gBoxSensor_3->setGeometry(QRect(400, 0, 361, 131));
        gBoxSensor_3->setStyleSheet(QLatin1String("QGroupBox#gBoxSensor_3\n"
"{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #E0E0E0, stop: 0.6 #FFFFFF);\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"}\n"
"QGroupBox::title{\n"
"background-color: transparent;\n"
"subcontrol-position: top center;\n"
"padding:2 13px;\n"
"}"));
        spinBox = new QSpinBox(gBoxSensor_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(30, 40, 181, 81));
        pushButton = new QPushButton(gBoxSensor_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 40, 90, 81));
        labSysStatus_2 = new QLabel(centralWidget);
        labSysStatus_2->setObjectName(QStringLiteral("labSysStatus_2"));
        labSysStatus_2->setGeometry(QRect(70, 360, 111, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1013, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btnRunStatus->setText(QApplication::translate("MainWindow", "Start", nullptr));
        gBoxSensor->setTitle(QApplication::translate("MainWindow", "Temp / Humi", nullptr));
        labTempValue->setText(QApplication::translate("MainWindow", "...", nullptr));
        labTempTitle->setText(QApplication::translate("MainWindow", "Temp:  ", nullptr));
        labHumiTitle->setText(QApplication::translate("MainWindow", "Humi:  ", nullptr));
        labHumiValue->setText(QApplication::translate("MainWindow", "...", nullptr));
        labSysStatus->setText(QApplication::translate("MainWindow", "...", nullptr));
        gBoxSensor_2->setTitle(QApplication::translate("MainWindow", "Temp / Humi", nullptr));
        labTempValue_min->setText(QApplication::translate("MainWindow", "...", nullptr));
        labHumiValue_min->setText(QApplication::translate("MainWindow", "...", nullptr));
        labHumiTitle_min->setText(QApplication::translate("MainWindow", "min: ", nullptr));
        labTempTitle_min->setText(QApplication::translate("MainWindow", "min: ", nullptr));
        labHumiTitle_max->setText(QApplication::translate("MainWindow", "max: ", nullptr));
        labHumiValue_max->setText(QApplication::translate("MainWindow", "...", nullptr));
        labTempValue_max->setText(QApplication::translate("MainWindow", "...", nullptr));
        labTempTitle_max->setText(QApplication::translate("MainWindow", "max: ", nullptr));
        labHumiValue_avg->setText(QApplication::translate("MainWindow", "...", nullptr));
        labTempValue_avg->setText(QApplication::translate("MainWindow", "...", nullptr));
        labHumiTitle_avg->setText(QApplication::translate("MainWindow", "avg: ", nullptr));
        labTempTitle_avg->setText(QApplication::translate("MainWindow", "avg: ", nullptr));
        gBoxSensor_3->setTitle(QApplication::translate("MainWindow", "Temp Setting", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "OK", nullptr));
        labSysStatus_2->setText(QApplication::translate("MainWindow", "System Status: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
