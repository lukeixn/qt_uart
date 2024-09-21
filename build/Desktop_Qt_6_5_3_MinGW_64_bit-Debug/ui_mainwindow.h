/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *xianshi;
    QTextEdit *input;
    QComboBox *port_select;
    QComboBox *bolt_select;
    QPushButton *update_port;
    QPushButton *open_port;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        xianshi = new QTextBrowser(centralwidget);
        xianshi->setObjectName("xianshi");
        xianshi->setGeometry(QRect(40, 30, 351, 241));
        input = new QTextEdit(centralwidget);
        input->setObjectName("input");
        input->setGeometry(QRect(40, 280, 351, 81));
        port_select = new QComboBox(centralwidget);
        port_select->setObjectName("port_select");
        port_select->setGeometry(QRect(460, 50, 111, 22));
        bolt_select = new QComboBox(centralwidget);
        bolt_select->addItem(QString());
        bolt_select->addItem(QString());
        bolt_select->setObjectName("bolt_select");
        bolt_select->setGeometry(QRect(460, 100, 111, 22));
        update_port = new QPushButton(centralwidget);
        update_port->setObjectName("update_port");
        update_port->setGeometry(QRect(460, 200, 80, 18));
        open_port = new QPushButton(centralwidget);
        open_port->setObjectName("open_port");
        open_port->setGeometry(QRect(460, 250, 80, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        bolt_select->setItemText(0, QCoreApplication::translate("MainWindow", "115200", nullptr));
        bolt_select->setItemText(1, QCoreApplication::translate("MainWindow", "9600", nullptr));

        update_port->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
        open_port->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
