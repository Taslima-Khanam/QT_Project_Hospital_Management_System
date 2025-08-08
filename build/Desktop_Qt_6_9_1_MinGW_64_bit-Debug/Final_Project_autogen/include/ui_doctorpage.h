/********************************************************************************
** Form generated from reading UI file 'doctorpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORPAGE_H
#define UI_DOCTORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorPage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *image;
    QPushButton *vpl;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *logoutBtn;
    QPushButton *showbb;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QTableWidget *tableWidget;
    QWidget *page_3;
    QLabel *label;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *searchBtn;
    QWidget *page_4;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *submitBtn;
    QTextEdit *textEdit;
    QPushButton *pushButton_7;

    void setupUi(QDialog *DoctorPage)
    {
        if (DoctorPage->objectName().isEmpty())
            DoctorPage->setObjectName("DoctorPage");
        DoctorPage->resize(821, 529);
        DoctorPage->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(DoctorPage);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 821, 531));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 196, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        image = new QLabel(page);
        image->setObjectName("image");
        image->setGeometry(QRect(0, -10, 821, 541));
        image->setStyleSheet(QString::fromUtf8(""));
        vpl = new QPushButton(page);
        vpl->setObjectName("vpl");
        vpl->setGeometry(QRect(110, 120, 211, 51));
        vpl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";\n"
""));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 260, 211, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";\n"
""));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(440, 130, 271, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";\n"
""));
        logoutBtn = new QPushButton(page);
        logoutBtn->setObjectName("logoutBtn");
        logoutBtn->setGeometry(QRect(310, 390, 181, 51));
        logoutBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";\n"
""));
        showbb = new QPushButton(page);
        showbb->setObjectName("showbb");
        showbb->setGeometry(QRect(110, 260, 201, 51));
        showbb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(310, 400, 181, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";\n"
""));
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 20, 561, 61));
        label_5->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(0, 0, 255);"));
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(140, 110, 571, 231));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label = new QLabel(page_3);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 721, 51));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(0, 0, 255);"));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(560, 390, 141, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";\n"
""));
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 210, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 20pt \"Imprint MT Shadow\";\n"
"color: rgb(0, 0, 91);;"));
        lineEdit_2 = new QLineEdit(page_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 210, 271, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));
        searchBtn = new QPushButton(page_3);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(550, 200, 141, 51));
        searchBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_2 = new QLabel(page_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 30, 501, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(0, 0, 255);"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 140, 161, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Lucida Calligraphy\";\n"
"background-color: rgb(43, 52, 217);\n"
"color: rgb(193, 231, 255);"));
        lineEdit = new QLineEdit(page_4);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 140, 471, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 230, 181, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Lucida Calligraphy\";\n"
"background-color: rgb(43, 52, 217);\n"
"color: rgb(193, 231, 255);"));
        submitBtn = new QPushButton(page_4);
        submitBtn->setObjectName("submitBtn");
        submitBtn->setGeometry(QRect(320, 410, 141, 48));
        submitBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";"));
        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(290, 210, 471, 131));
        textEdit->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Lucida Fax\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_7 = new QPushButton(page_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(580, 410, 141, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 91);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_4);

        retranslateUi(DoctorPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DoctorPage);
    } // setupUi

    void retranslateUi(QDialog *DoctorPage)
    {
        DoctorPage->setWindowTitle(QCoreApplication::translate("DoctorPage", "Dialog", nullptr));
        image->setText(QString());
        vpl->setText(QCoreApplication::translate("DoctorPage", "View Patients List", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DoctorPage", "Write Prescriptions", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DoctorPage", "View Appoinment  Schedule", nullptr));
        logoutBtn->setText(QCoreApplication::translate("DoctorPage", "Logout", nullptr));
        showbb->setText(QCoreApplication::translate("DoctorPage", "Search Patients Details", nullptr));
        pushButton_5->setText(QCoreApplication::translate("DoctorPage", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("DoctorPage", "Appoinment  Schedule", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DoctorPage", "Patient", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DoctorPage", "Doctor", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DoctorPage", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DoctorPage", "Time", nullptr));
        label->setText(QCoreApplication::translate("DoctorPage", "search patient information", nullptr));
        pushButton_6->setText(QCoreApplication::translate("DoctorPage", "Back", nullptr));
        label_6->setText(QCoreApplication::translate("DoctorPage", "Patients Id", nullptr));
        searchBtn->setText(QCoreApplication::translate("DoctorPage", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("DoctorPage", "Write Prescription", nullptr));
        label_3->setText(QCoreApplication::translate("DoctorPage", "Patient ID:", nullptr));
        label_4->setText(QCoreApplication::translate("DoctorPage", "Notes/Medicines:", nullptr));
        submitBtn->setText(QCoreApplication::translate("DoctorPage", "Submit", nullptr));
        pushButton_7->setText(QCoreApplication::translate("DoctorPage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorPage: public Ui_DoctorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORPAGE_H
