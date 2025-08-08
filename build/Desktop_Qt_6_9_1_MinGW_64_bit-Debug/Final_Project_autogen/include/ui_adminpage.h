/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *image;
    QPushButton *doctorBtn;
    QPushButton *viewappBtn;
    QPushButton *pushButton_4;
    QPushButton *logoutBtn;
    QWidget *page_2;
    QPushButton *add;
    QPushButton *pushButton_5;
    QPushButton *back;
    QWidget *page_3;
    QTableWidget *userTable;
    QPushButton *add2;
    QPushButton *back_2;
    QWidget *appointmentsPage;
    QPushButton *back_4;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QWidget *page_5;
    QLabel *label;
    QPushButton *showBtn;
    QPushButton *back_7;
    QPushButton *back_8;
    QWidget *page_4;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QPushButton *searchBtn;
    QPushButton *back_14;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName("AdminPage");
        AdminPage->resize(851, 616);
        stackedWidget = new QStackedWidget(AdminPage);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 851, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 192, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        image = new QLabel(page);
        image->setObjectName("image");
        image->setGeometry(QRect(0, 0, 841, 611));
        doctorBtn = new QPushButton(page);
        doctorBtn->setObjectName("doctorBtn");
        doctorBtn->setGeometry(QRect(180, 100, 221, 51));
        doctorBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        viewappBtn = new QPushButton(page);
        viewappBtn->setObjectName("viewappBtn");
        viewappBtn->setGeometry(QRect(540, 100, 221, 51));
        viewappBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(190, 300, 200, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        logoutBtn = new QPushButton(page);
        logoutBtn->setObjectName("logoutBtn");
        logoutBtn->setGeometry(QRect(550, 300, 180, 51));
        logoutBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        add = new QPushButton(page_2);
        add->setObjectName("add");
        add->setGeometry(QRect(270, 170, 221, 51));
        add->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(270, 290, 221, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back = new QPushButton(page_2);
        back->setObjectName("back");
        back->setGeometry(QRect(270, 410, 221, 51));
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        userTable = new QTableWidget(page_3);
        if (userTable->columnCount() < 4)
            userTable->setColumnCount(4);
        QFont font;
        font.setFamilies({QString::fromUtf8("Nirmala UI")});
        font.setPointSize(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        userTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        userTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        userTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        userTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        userTable->setObjectName("userTable");
        userTable->setGeometry(QRect(150, 150, 571, 301));
        userTable->setStyleSheet(QString::fromUtf8("font: 14pt \"Lucida Sans Unicode\";\n"
"color: rgb(0, 0, 0);"));
        userTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        add2 = new QPushButton(page_3);
        add2->setObjectName("add2");
        add2->setGeometry(QRect(200, 70, 221, 51));
        add2->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back_2 = new QPushButton(page_3);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(290, 500, 221, 51));
        back_2->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_3);
        appointmentsPage = new QWidget();
        appointmentsPage->setObjectName("appointmentsPage");
        back_4 = new QPushButton(appointmentsPage);
        back_4->setObjectName("back_4");
        back_4->setGeometry(QRect(360, 480, 161, 51));
        back_4->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        label_2 = new QLabel(appointmentsPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 40, 571, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(243, 0, 243);"));
        tableWidget = new QTableWidget(appointmentsPage);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(100, 170, 691, 251));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(appointmentsPage);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label = new QLabel(page_5);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 70, 351, 51));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(243, 0, 243);"));
        showBtn = new QPushButton(page_5);
        showBtn->setObjectName("showBtn");
        showBtn->setGeometry(QRect(150, 230, 251, 51));
        showBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back_7 = new QPushButton(page_5);
        back_7->setObjectName("back_7");
        back_7->setGeometry(QRect(550, 240, 171, 51));
        back_7->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back_8 = new QPushButton(page_5);
        back_8->setObjectName("back_8");
        back_8->setGeometry(QRect(540, 470, 151, 51));
        back_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(200, 200, 200);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_3 = new QLabel(page_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 40, 721, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(243, 0, 243);"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(110, 200, 131, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 20pt \"Imprint MT Shadow\";\n"
"color: rgb(163, 2, 150);"));
        lineEdit_3 = new QLineEdit(page_4);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(270, 200, 271, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei\";\n"
"color: rgb(0, 0, 0);"));
        searchBtn = new QPushButton(page_4);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(150, 350, 221, 51));
        searchBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back_14 = new QPushButton(page_4);
        back_14->setObjectName("back_14");
        back_14->setGeometry(QRect(520, 350, 221, 51));
        back_14->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 0, 73);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_4);

        retranslateUi(AdminPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Dialog", nullptr));
        image->setText(QString());
        doctorBtn->setText(QCoreApplication::translate("AdminPage", "Manage Doctors/Staff", nullptr));
        viewappBtn->setText(QCoreApplication::translate("AdminPage", "View Appointments", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AdminPage", "View Reports", nullptr));
        logoutBtn->setText(QCoreApplication::translate("AdminPage", "Log Out", nullptr));
        add->setText(QCoreApplication::translate("AdminPage", "Add Doctors/Staff", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AdminPage", "Remove Doctors/Staff", nullptr));
        back->setText(QCoreApplication::translate("AdminPage", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = userTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminPage", "User Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = userTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminPage", "Role", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = userTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminPage", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = userTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminPage", "Action", nullptr));
        add2->setText(QCoreApplication::translate("AdminPage", "Add", nullptr));
        back_2->setText(QCoreApplication::translate("AdminPage", "Back", nullptr));
        back_4->setText(QCoreApplication::translate("AdminPage", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("AdminPage", "Manage Appointments", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminPage", "Patients Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminPage", "Doctor", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminPage", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AdminPage", "Problem", nullptr));
        label->setText(QCoreApplication::translate("AdminPage", "View Reports", nullptr));
        showBtn->setText(QCoreApplication::translate("AdminPage", "All Registered Patients IDs", nullptr));
        back_7->setText(QCoreApplication::translate("AdminPage", "Patient Details", nullptr));
        back_8->setText(QCoreApplication::translate("AdminPage", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("AdminPage", "search patient information", nullptr));
        label_7->setText(QCoreApplication::translate("AdminPage", "Patients Id", nullptr));
        searchBtn->setText(QCoreApplication::translate("AdminPage", "View Details", nullptr));
        back_14->setText(QCoreApplication::translate("AdminPage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
