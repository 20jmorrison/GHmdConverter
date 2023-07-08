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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(593, 461);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        insertImage = new QPushButton(centralwidget);
        insertImage->setObjectName("insertImage");
        insertImage->setGeometry(QRect(220, 30, 100, 32));
        increaseImage = new QPushButton(centralwidget);
        increaseImage->setObjectName("increaseImage");
        increaseImage->setGeometry(QRect(340, 30, 100, 32));
        decreaseImage = new QPushButton(centralwidget);
        decreaseImage->setObjectName("decreaseImage");
        decreaseImage->setGeometry(QRect(340, 70, 100, 32));
        textEdit = new QTextBrowser(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(100, 140, 371, 231));
        textEdit->setReadOnly(false);
        insertBullet = new QPushButton(centralwidget);
        insertBullet->setObjectName("insertBullet");
        insertBullet->setGeometry(QRect(220, 70, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 593, 24));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
