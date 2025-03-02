/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLabel *label1;
    QPushButton *P1;
    QPushButton *P2;
    QPushButton *Aika1;
    QPushButton *Aika2;
    QPushButton *Start;
    QPushButton *Stop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(120, 40, 118, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(580, 40, 118, 23));
        progressBar_2->setValue(24);
        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(280, 160, 271, 71));
        QFont font;
        font.setPointSize(9);
        label1->setFont(font);
        P1 = new QPushButton(centralwidget);
        P1->setObjectName("P1");
        P1->setGeometry(QRect(130, 80, 101, 51));
        P2 = new QPushButton(centralwidget);
        P2->setObjectName("P2");
        P2->setGeometry(QRect(600, 80, 101, 51));
        Aika1 = new QPushButton(centralwidget);
        Aika1->setObjectName("Aika1");
        Aika1->setGeometry(QRect(270, 260, 91, 41));
        Aika2 = new QPushButton(centralwidget);
        Aika2->setObjectName("Aika2");
        Aika2->setGeometry(QRect(410, 260, 91, 41));
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(190, 423, 121, 41));
        Stop = new QPushButton(centralwidget);
        Stop->setObjectName("Stop");
        Stop->setGeometry(QRect(460, 420, 131, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "VALITSE PELIAIKA JA PAINA STARTTIA", nullptr));
        P1->setText(QCoreApplication::translate("MainWindow", "SWITCH PLAYER", nullptr));
        P2->setText(QCoreApplication::translate("MainWindow", "SWITCH PLAYER", nullptr));
        Aika1->setText(QCoreApplication::translate("MainWindow", "120 SEC", nullptr));
        Aika2->setText(QCoreApplication::translate("MainWindow", "5 MIN", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
