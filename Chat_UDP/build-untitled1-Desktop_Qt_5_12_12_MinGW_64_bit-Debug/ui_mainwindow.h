/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QWidget *centralwidget;
    QPushButton *SendingData;
    QTextEdit *textEdit;
    QTextEdit *inputTextEdit;
    QPushButton *selectFile;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu_1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(499, 250);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SendingData = new QPushButton(centralwidget);
        SendingData->setObjectName(QString::fromUtf8("SendingData"));
        SendingData->setGeometry(QRect(400, 200, 100, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 501, 201));
        textEdit->setMinimumSize(QSize(400, 201));
        textEdit->setMaximumSize(QSize(501, 201));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);"));
        inputTextEdit = new QTextEdit(centralwidget);
        inputTextEdit->setObjectName(QString::fromUtf8("inputTextEdit"));
        inputTextEdit->setGeometry(QRect(60, 200, 341, 31));
        selectFile = new QPushButton(centralwidget);
        selectFile->setObjectName(QString::fromUtf8("selectFile"));
        selectFile->setGeometry(QRect(0, 200, 31, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 200, 31, 31));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 499, 20));
        menu_1 = new QMenu(menuBar);
        menu_1->setObjectName(QString::fromUtf8("menu_1"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_1->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200 2", nullptr));
        SendingData->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
#ifndef QT_NO_WHATSTHIS
        textEdit->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        selectFile->setText(QApplication::translate("MainWindow", "\360\237\223\216", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\360\237\227\221", nullptr));
        menu_1->setTitle(QApplication::translate("MainWindow", "\320\240\320\265\320\275\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
