/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *image;
    QPushButton *adminBtn;
    QPushButton *doctorBtn;
    QPushButton *reciptionistBtn;
    QWidget *page_2;
    QLabel *image2;
    QLabel *label;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *loginBtn;
    QPushButton *back1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1010, 698);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 10, 1011, 681));
        page = new QWidget();
        page->setObjectName("page");
        image = new QLabel(page);
        image->setObjectName("image");
        image->setGeometry(QRect(0, -10, 1011, 691));
        adminBtn = new QPushButton(page);
        adminBtn->setObjectName("adminBtn");
        adminBtn->setGeometry(QRect(420, 280, 181, 61));
        adminBtn->setStyleSheet(QString::fromUtf8("font: 26pt \"Poor Richard\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 139, 136);"));
        doctorBtn = new QPushButton(page);
        doctorBtn->setObjectName("doctorBtn");
        doctorBtn->setGeometry(QRect(420, 380, 181, 61));
        doctorBtn->setStyleSheet(QString::fromUtf8("font: 26pt \"Poor Richard\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 139, 136);"));
        reciptionistBtn = new QPushButton(page);
        reciptionistBtn->setObjectName("reciptionistBtn");
        reciptionistBtn->setGeometry(QRect(420, 480, 181, 61));
        reciptionistBtn->setStyleSheet(QString::fromUtf8("font: 26pt \"Poor Richard\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 139, 136);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        image2 = new QLabel(page_2);
        image2->setObjectName("image2");
        image2->setGeometry(QRect(0, -10, 1011, 691));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 130, 441, 61));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(0, 0, 255);"));
        username = new QLineEdit(page_2);
        username->setObjectName("username");
        username->setGeometry(QRect(260, 220, 361, 41));
        username->setStyleSheet(QString::fromUtf8("font: 600 16pt \"Segoe UI Variable\";"));
        password = new QLineEdit(page_2);
        password->setObjectName("password");
        password->setGeometry(QRect(260, 310, 361, 41));
        password->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";"));
        password->setEchoMode(QLineEdit::EchoMode::Password);
        loginBtn = new QPushButton(page_2);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setGeometry(QRect(580, 420, 151, 51));
        loginBtn->setStyleSheet(QString::fromUtf8("font: 700 26pt \"Perpetua\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 139, 136);"));
        back1 = new QPushButton(page_2);
        back1->setObjectName("back1");
        back1->setGeometry(QRect(220, 410, 151, 51));
        back1->setStyleSheet(QString::fromUtf8("font: 700 26pt \"Perpetua\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 139, 136);"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        image->setText(QString());
        adminBtn->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        doctorBtn->setText(QCoreApplication::translate("MainWindow", "Doctor", nullptr));
        reciptionistBtn->setText(QCoreApplication::translate("MainWindow", "Receptionist", nullptr));
        image2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Please Login", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("MainWindow", "User name", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        back1->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
