/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *insertImage;
    QPushButton *increaseImage;
    QPushButton *decreaseImage;
    QTextBrowser *textEdit;
    QPushButton *insertBullet;
    QTextBrowser *output;
    QPushButton *convert;
    QPushButton *clear;
    QPushButton *copy;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        insertImage = new QPushButton(centralwidget);
        insertImage->setObjectName("insertImage");
        insertImage->setGeometry(QRect(220, 20, 101, 31));
        increaseImage = new QPushButton(centralwidget);
        increaseImage->setObjectName("increaseImage");
        increaseImage->setGeometry(QRect(320, 20, 21, 31));
        decreaseImage = new QPushButton(centralwidget);
        decreaseImage->setObjectName("decreaseImage");
        decreaseImage->setGeometry(QRect(200, 20, 21, 31));
        textEdit = new QTextBrowser(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 60, 541, 501));
        textEdit->setReadOnly(false);
        insertBullet = new QPushButton(centralwidget);
        insertBullet->setObjectName("insertBullet");
        insertBullet->setGeometry(QRect(350, 20, 101, 31));
        output = new QTextBrowser(centralwidget);
        output->setObjectName("output");
        output->setGeometry(QRect(580, 60, 291, 501));
        convert = new QPushButton(centralwidget);
        convert->setObjectName("convert");
        convert->setGeometry(QRect(460, 20, 101, 31));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(20, 20, 171, 31));
        copy = new QPushButton(centralwidget);
        copy->setObjectName("copy");
        copy->setGeometry(QRect(580, 20, 291, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GHmdConverter", nullptr));
        insertImage->setText(QCoreApplication::translate("MainWindow", "Insert Image", nullptr));
        increaseImage->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        decreaseImage->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        insertBullet->setText(QCoreApplication::translate("MainWindow", "Bullet Point", nullptr));
        convert->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        copy->setText(QCoreApplication::translate("MainWindow", "Copy MarkDown!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
