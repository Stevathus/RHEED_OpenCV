/********************************************************************************
** Form generated from reading UI file 'RHEED_OpenCV.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RHEED_OPENCV_H
#define UI_RHEED_OPENCV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RHEED_OpenCVClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QCustomPlot *plot;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RHEED_OpenCVClass)
    {
        if (RHEED_OpenCVClass->objectName().isEmpty())
            RHEED_OpenCVClass->setObjectName(QStringLiteral("RHEED_OpenCVClass"));
        RHEED_OpenCVClass->resize(851, 712);
        centralWidget = new QWidget(RHEED_OpenCVClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(740, 630, 75, 23));
        plot = new QCustomPlot(centralWidget);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(30, 20, 781, 571));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 600, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 600, 47, 13));
        RHEED_OpenCVClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RHEED_OpenCVClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 851, 21));
        RHEED_OpenCVClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RHEED_OpenCVClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RHEED_OpenCVClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RHEED_OpenCVClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RHEED_OpenCVClass->setStatusBar(statusBar);

        retranslateUi(RHEED_OpenCVClass);
        QObject::connect(pushButton, SIGNAL(clicked()), RHEED_OpenCVClass, SLOT(close()));

        QMetaObject::connectSlotsByName(RHEED_OpenCVClass);
    } // setupUi

    void retranslateUi(QMainWindow *RHEED_OpenCVClass)
    {
        RHEED_OpenCVClass->setWindowTitle(QApplication::translate("RHEED_OpenCVClass", "RHEED_OpenCV", nullptr));
        pushButton->setText(QApplication::translate("RHEED_OpenCVClass", "Close", nullptr));
        label->setText(QApplication::translate("RHEED_OpenCVClass", "Y coord", nullptr));
        label_2->setText(QApplication::translate("RHEED_OpenCVClass", "X coord", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RHEED_OpenCVClass: public Ui_RHEED_OpenCVClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RHEED_OPENCV_H
