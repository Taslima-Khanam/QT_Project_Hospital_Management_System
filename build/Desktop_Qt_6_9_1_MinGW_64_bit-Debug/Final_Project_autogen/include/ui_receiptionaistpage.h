/********************************************************************************
** Form generated from reading UI file 'receiptionaistpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTIONAISTPAGE_H
#define UI_RECEIPTIONAISTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReceiptionaistPage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *image;
    QPushButton *regBtn;
    QPushButton *bookBtn;
    QPushButton *upBtn;
    QPushButton *searchBtn;
    QPushButton *delete_2;
    QPushButton *showBtn;
    QPushButton *logoutBtn;
    QPushButton *doctroadv;
    QWidget *page_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *patientIDLabel;
    QLineEdit *patientIDLineEdit;
    QLabel *nameLabel;
    QLabel *ageLabel;
    QLineEdit *ageLineEdit;
    QLabel *genderLabel;
    QComboBox *genderComboBox;
    QLabel *bloodGroupLabel;
    QComboBox *bloodGroupComboBox;
    QLabel *dateLabel;
    QDateEdit *dateDateEdit;
    QLabel *timeLabel;
    QTimeEdit *timeTimeEdit;
    QLabel *diseaseLabel;
    QLineEdit *diseaseLineEdit;
    QLabel *bedLabel;
    QComboBox *bedComboBox;
    QLabel *roomNoLabel;
    QLineEdit *roomNoLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *label;
    QPushButton *submit;
    QPushButton *back1;
    QWidget *page_3;
    QLabel *label_2;
    QPushButton *deleteBtn;
    QLabel *label_3;
    QLineEdit *deleteIDLineEdit;
    QPushButton *back2;
    QWidget *page_4;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *updateIDLineEdit;
    QLineEdit *updateDiseaseLineEdit;
    QPushButton *UpdateBtn;
    QPushButton *back3;
    QWidget *page_9;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *searchIDLineEdit;
    QPushButton *search;
    QPushButton *back3_2;
    QWidget *page_10;
    QLabel *label_13;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *selectPatientLabel;
    QLineEdit *selectPatientLineEdit;
    QLabel *selectDoctorLabel;
    QLineEdit *linedoc;
    QLabel *dateLabel_3;
    QDateEdit *date;
    QLabel *timeLabel_3;
    QTimeEdit *time;
    QPushButton *confirm;
    QPushButton *back4;
    QWidget *page_5;
    QLabel *label_5;
    QLabel *label_14;
    QLineEdit *lineedit;
    QLabel *label_15;
    QTextEdit *textEdit;
    QPushButton *loadBtn;
    QPushButton *back4_2;

    void setupUi(QDialog *ReceiptionaistPage)
    {
        if (ReceiptionaistPage->objectName().isEmpty())
            ReceiptionaistPage->setObjectName("ReceiptionaistPage");
        ReceiptionaistPage->resize(767, 495);
        stackedWidget = new QStackedWidget(ReceiptionaistPage);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 771, 501));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(185, 138, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        image = new QLabel(page);
        image->setObjectName("image");
        image->setGeometry(QRect(-10, 0, 761, 491));
        regBtn = new QPushButton(page);
        regBtn->setObjectName("regBtn");
        regBtn->setGeometry(QRect(100, 80, 221, 51));
        regBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        bookBtn = new QPushButton(page);
        bookBtn->setObjectName("bookBtn");
        bookBtn->setGeometry(QRect(390, 80, 221, 51));
        bookBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        upBtn = new QPushButton(page);
        upBtn->setObjectName("upBtn");
        upBtn->setGeometry(QRect(100, 190, 221, 51));
        upBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        searchBtn = new QPushButton(page);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(390, 190, 221, 51));
        searchBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        delete_2 = new QPushButton(page);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(100, 300, 221, 51));
        delete_2->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        showBtn = new QPushButton(page);
        showBtn->setObjectName("showBtn");
        showBtn->setGeometry(QRect(390, 300, 221, 51));
        showBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        logoutBtn = new QPushButton(page);
        logoutBtn->setObjectName("logoutBtn");
        logoutBtn->setGeometry(QRect(410, 390, 181, 51));
        logoutBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        doctroadv = new QPushButton(page);
        doctroadv->setObjectName("doctroadv");
        doctroadv->setGeometry(QRect(120, 390, 181, 51));
        doctroadv->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        formLayoutWidget = new QWidget(page_2);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 81, 701, 342));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        patientIDLabel = new QLabel(formLayoutWidget);
        patientIDLabel->setObjectName("patientIDLabel");
        patientIDLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(59, 28, 95);"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, patientIDLabel);

        patientIDLineEdit = new QLineEdit(formLayoutWidget);
        patientIDLineEdit->setObjectName("patientIDLineEdit");
        patientIDLineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, patientIDLineEdit);

        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(59, 28, 95);"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, nameLabel);

        ageLabel = new QLabel(formLayoutWidget);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(59, 28, 95);"));

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, ageLabel);

        ageLineEdit = new QLineEdit(formLayoutWidget);
        ageLineEdit->setObjectName("ageLineEdit");
        ageLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, ageLineEdit);

        genderLabel = new QLabel(formLayoutWidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(59, 28, 95);"));

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, genderLabel);

        genderComboBox = new QComboBox(formLayoutWidget);
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->setObjectName("genderComboBox");
        genderComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, genderComboBox);

        bloodGroupLabel = new QLabel(formLayoutWidget);
        bloodGroupLabel->setObjectName("bloodGroupLabel");
        bloodGroupLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(49, 0, 74);"));

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, bloodGroupLabel);

        bloodGroupComboBox = new QComboBox(formLayoutWidget);
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->addItem(QString());
        bloodGroupComboBox->setObjectName("bloodGroupComboBox");
        bloodGroupComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, bloodGroupComboBox);

        dateLabel = new QLabel(formLayoutWidget);
        dateLabel->setObjectName("dateLabel");
        dateLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(59, 28, 95);"));

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, dateLabel);

        dateDateEdit = new QDateEdit(formLayoutWidget);
        dateDateEdit->setObjectName("dateDateEdit");
        dateDateEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, dateDateEdit);

        timeLabel = new QLabel(formLayoutWidget);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(49, 0, 74);"));

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, timeLabel);

        timeTimeEdit = new QTimeEdit(formLayoutWidget);
        timeTimeEdit->setObjectName("timeTimeEdit");
        timeTimeEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, timeTimeEdit);

        diseaseLabel = new QLabel(formLayoutWidget);
        diseaseLabel->setObjectName("diseaseLabel");
        diseaseLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(49, 0, 74);"));

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, diseaseLabel);

        diseaseLineEdit = new QLineEdit(formLayoutWidget);
        diseaseLineEdit->setObjectName("diseaseLineEdit");
        diseaseLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, diseaseLineEdit);

        bedLabel = new QLabel(formLayoutWidget);
        bedLabel->setObjectName("bedLabel");
        bedLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(49, 0, 74);"));

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, bedLabel);

        bedComboBox = new QComboBox(formLayoutWidget);
        bedComboBox->addItem(QString());
        bedComboBox->addItem(QString());
        bedComboBox->addItem(QString());
        bedComboBox->setObjectName("bedComboBox");
        bedComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, bedComboBox);

        roomNoLabel = new QLabel(formLayoutWidget);
        roomNoLabel->setObjectName("roomNoLabel");
        roomNoLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Palatino Linotype\";\n"
"color: rgb(49, 0, 74);"));

        formLayout->setWidget(9, QFormLayout::ItemRole::LabelRole, roomNoLabel);

        roomNoLineEdit = new QLineEdit(formLayoutWidget);
        roomNoLineEdit->setObjectName("roomNoLineEdit");
        roomNoLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);font: 14pt \"Mongolian Baiti\";"));

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, roomNoLineEdit);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, nameLineEdit);

        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 491, 31));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(15, 223, 255);\n"
"color: rgb(224, 255, 255);"));
        submit = new QPushButton(page_2);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(530, 440, 171, 41));
        submit->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back1 = new QPushButton(page_2);
        back1->setObjectName("back1");
        back1->setGeometry(QRect(140, 440, 161, 41));
        back1->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_2 = new QLabel(page_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 50, 711, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(74, 0, 111);"));
        deleteBtn = new QPushButton(page_3);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setGeometry(QRect(510, 280, 161, 51));
        deleteBtn->setStyleSheet(QString::fromUtf8("font: 22pt \"Georgia\";\n"
"color: rgb(255, 0, 0);"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 180, 131, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Imprint MT Shadow\";\n"
"color: rgb(0, 0, 91);;"));
        deleteIDLineEdit = new QLineEdit(page_3);
        deleteIDLineEdit->setObjectName("deleteIDLineEdit");
        deleteIDLineEdit->setGeometry(QRect(250, 180, 411, 31));
        deleteIDLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        back2 = new QPushButton(page_3);
        back2->setObjectName("back2");
        back2->setGeometry(QRect(140, 290, 151, 41));
        back2->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 30, 711, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(74, 0, 111);"));
        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(120, 160, 131, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 20pt \"Imprint MT Shadow\";\n"
"color: rgb(0, 0, 91);;"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(110, 240, 191, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 20pt \"Imprint MT Shadow\";\n"
"color: rgb(0, 0, 91);;"));
        updateIDLineEdit = new QLineEdit(page_4);
        updateIDLineEdit->setObjectName("updateIDLineEdit");
        updateIDLineEdit->setGeometry(QRect(310, 160, 411, 31));
        updateIDLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        updateDiseaseLineEdit = new QLineEdit(page_4);
        updateDiseaseLineEdit->setObjectName("updateDiseaseLineEdit");
        updateDiseaseLineEdit->setGeometry(QRect(310, 240, 411, 31));
        updateDiseaseLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        UpdateBtn = new QPushButton(page_4);
        UpdateBtn->setObjectName("UpdateBtn");
        UpdateBtn->setGeometry(QRect(530, 340, 171, 41));
        UpdateBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back3 = new QPushButton(page_4);
        back3->setObjectName("back3");
        back3->setGeometry(QRect(170, 340, 141, 41));
        back3->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_4);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        label_11 = new QLabel(page_9);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 20, 711, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(166, 55, 166);"));
        label_12 = new QLabel(page_9);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(70, 170, 131, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 20pt \"Imprint MT Shadow\";\n"
"color: rgb(0, 0, 91);;"));
        searchIDLineEdit = new QLineEdit(page_9);
        searchIDLineEdit->setObjectName("searchIDLineEdit");
        searchIDLineEdit->setGeometry(QRect(220, 170, 441, 31));
        searchIDLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        search = new QPushButton(page_9);
        search->setObjectName("search");
        search->setGeometry(QRect(210, 270, 241, 51));
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back3_2 = new QPushButton(page_9);
        back3_2->setObjectName("back3_2");
        back3_2->setGeometry(QRect(570, 360, 141, 41));
        back3_2->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_13 = new QLabel(page_10);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(150, 40, 501, 31));
        label_13->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(166, 55, 166);"));
        formLayoutWidget_3 = new QWidget(page_10);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(120, 140, 521, 150));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        selectPatientLabel = new QLabel(formLayoutWidget_3);
        selectPatientLabel->setObjectName("selectPatientLabel");
        selectPatientLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, selectPatientLabel);

        selectPatientLineEdit = new QLineEdit(formLayoutWidget_3);
        selectPatientLineEdit->setObjectName("selectPatientLineEdit");
        selectPatientLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Mongolian Baiti\";"));

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, selectPatientLineEdit);

        selectDoctorLabel = new QLabel(formLayoutWidget_3);
        selectDoctorLabel->setObjectName("selectDoctorLabel");
        selectDoctorLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, selectDoctorLabel);

        linedoc = new QLineEdit(formLayoutWidget_3);
        linedoc->setObjectName("linedoc");
        linedoc->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Mongolian Baiti\";"));

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, linedoc);

        dateLabel_3 = new QLabel(formLayoutWidget_3);
        dateLabel_3->setObjectName("dateLabel_3");
        dateLabel_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, dateLabel_3);

        date = new QDateEdit(formLayoutWidget_3);
        date->setObjectName("date");
        date->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);;font: 14pt \"Mongolian Baiti\";"));

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, date);

        timeLabel_3 = new QLabel(formLayoutWidget_3);
        timeLabel_3->setObjectName("timeLabel_3");
        timeLabel_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, timeLabel_3);

        time = new QTimeEdit(formLayoutWidget_3);
        time->setObjectName("time");
        time->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Mongolian Baiti\";"));

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, time);

        confirm = new QPushButton(page_10);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(250, 330, 181, 41));
        confirm->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back4 = new QPushButton(page_10);
        back4->setObjectName("back4");
        back4->setGeometry(QRect(530, 330, 161, 41));
        back4->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_10);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_5 = new QLabel(page_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 40, 691, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 36pt \"Algerian\";\n"
"color: rgb(166, 55, 166);"));
        label_14 = new QLabel(page_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(110, 180, 121, 31));
        label_14->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Lucida Calligraphy\";\n"
"background-color: rgb(64, 0, 193);"));
        lineedit = new QLineEdit(page_5);
        lineedit->setObjectName("lineedit");
        lineedit->setGeometry(QRect(270, 180, 441, 31));
        lineedit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        label_15 = new QLabel(page_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(110, 270, 121, 31));
        label_15->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Lucida Calligraphy\";\n"
"background-color: rgb(64, 0, 193);"));
        textEdit = new QTextEdit(page_5);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(270, 270, 441, 111));
        textEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"Mongolian Baiti\";\n"
"color: rgb(0, 0, 0);"));
        loadBtn = new QPushButton(page_5);
        loadBtn->setObjectName("loadBtn");
        loadBtn->setGeometry(QRect(250, 420, 171, 41));
        loadBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        back4_2 = new QPushButton(page_5);
        back4_2->setObjectName("back4_2");
        back4_2->setGeometry(QRect(520, 420, 161, 41));
        back4_2->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 0, 139);\n"
"font: 16pt \"Baskerville Old Face\";"));
        stackedWidget->addWidget(page_5);

        retranslateUi(ReceiptionaistPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ReceiptionaistPage);
    } // setupUi

    void retranslateUi(QDialog *ReceiptionaistPage)
    {
        ReceiptionaistPage->setWindowTitle(QCoreApplication::translate("ReceiptionaistPage", "Dialog", nullptr));
        image->setText(QString());
        regBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Register Patient", nullptr));
        bookBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Book Appointments", nullptr));
        upBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Update", nullptr));
        searchBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Search ", nullptr));
        delete_2->setText(QCoreApplication::translate("ReceiptionaistPage", "Delete", nullptr));
        showBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Show Patients IDs", nullptr));
        logoutBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Log out", nullptr));
        doctroadv->setText(QCoreApplication::translate("ReceiptionaistPage", "Doctor Advice", nullptr));
        patientIDLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Patient ID", nullptr));
        nameLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Name", nullptr));
        ageLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Age", nullptr));
        genderLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Gender", nullptr));
        genderComboBox->setItemText(0, QCoreApplication::translate("ReceiptionaistPage", "Male", nullptr));
        genderComboBox->setItemText(1, QCoreApplication::translate("ReceiptionaistPage", "Female", nullptr));
        genderComboBox->setItemText(2, QCoreApplication::translate("ReceiptionaistPage", "Others", nullptr));

        bloodGroupLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Blood Group", nullptr));
        bloodGroupComboBox->setItemText(0, QCoreApplication::translate("ReceiptionaistPage", "A+", nullptr));
        bloodGroupComboBox->setItemText(1, QCoreApplication::translate("ReceiptionaistPage", "B+", nullptr));
        bloodGroupComboBox->setItemText(2, QCoreApplication::translate("ReceiptionaistPage", "AB+", nullptr));
        bloodGroupComboBox->setItemText(3, QCoreApplication::translate("ReceiptionaistPage", "O+", nullptr));
        bloodGroupComboBox->setItemText(4, QCoreApplication::translate("ReceiptionaistPage", "A-", nullptr));
        bloodGroupComboBox->setItemText(5, QCoreApplication::translate("ReceiptionaistPage", "B-", nullptr));
        bloodGroupComboBox->setItemText(6, QCoreApplication::translate("ReceiptionaistPage", "AB-", nullptr));
        bloodGroupComboBox->setItemText(7, QCoreApplication::translate("ReceiptionaistPage", "O-", nullptr));

        dateLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Date", nullptr));
        timeLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Time", nullptr));
        diseaseLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Disease", nullptr));
        bedLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Bed", nullptr));
        bedComboBox->setItemText(0, QCoreApplication::translate("ReceiptionaistPage", "General Ward", nullptr));
        bedComboBox->setItemText(1, QCoreApplication::translate("ReceiptionaistPage", "AC Cabin", nullptr));
        bedComboBox->setItemText(2, QCoreApplication::translate("ReceiptionaistPage", "Non-AC Cabin", nullptr));

        roomNoLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Room No", nullptr));
        label->setText(QCoreApplication::translate("ReceiptionaistPage", "Enter Information", nullptr));
        submit->setText(QCoreApplication::translate("ReceiptionaistPage", "Submit", nullptr));
        back1->setText(QCoreApplication::translate("ReceiptionaistPage", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("ReceiptionaistPage", "delete patient information", nullptr));
        deleteBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("ReceiptionaistPage", "Patient ID", nullptr));
        back2->setText(QCoreApplication::translate("ReceiptionaistPage", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("ReceiptionaistPage", "update patient information", nullptr));
        label_9->setText(QCoreApplication::translate("ReceiptionaistPage", "Patient ID", nullptr));
        label_10->setText(QCoreApplication::translate("ReceiptionaistPage", "Patient Disease", nullptr));
        UpdateBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Update", nullptr));
        back3->setText(QCoreApplication::translate("ReceiptionaistPage", "Back", nullptr));
        label_11->setText(QCoreApplication::translate("ReceiptionaistPage", "search patient information", nullptr));
        label_12->setText(QCoreApplication::translate("ReceiptionaistPage", "Patient ID", nullptr));
        search->setText(QCoreApplication::translate("ReceiptionaistPage", "Search", nullptr));
        back3_2->setText(QCoreApplication::translate("ReceiptionaistPage", "Back", nullptr));
        label_13->setText(QCoreApplication::translate("ReceiptionaistPage", "Book Appointments", nullptr));
        selectPatientLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Select Patient:", nullptr));
        selectDoctorLabel->setText(QCoreApplication::translate("ReceiptionaistPage", "Select Doctor:", nullptr));
        dateLabel_3->setText(QCoreApplication::translate("ReceiptionaistPage", "Date", nullptr));
        timeLabel_3->setText(QCoreApplication::translate("ReceiptionaistPage", "Time:", nullptr));
        confirm->setText(QCoreApplication::translate("ReceiptionaistPage", "Confirm", nullptr));
        back4->setText(QCoreApplication::translate("ReceiptionaistPage", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("ReceiptionaistPage", "Doctor Advice  for Patient", nullptr));
        label_14->setText(QCoreApplication::translate("ReceiptionaistPage", "Patient ID", nullptr));
        label_15->setText(QCoreApplication::translate("ReceiptionaistPage", "Notes", nullptr));
        loadBtn->setText(QCoreApplication::translate("ReceiptionaistPage", "Load Advice", nullptr));
        back4_2->setText(QCoreApplication::translate("ReceiptionaistPage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceiptionaistPage: public Ui_ReceiptionaistPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTIONAISTPAGE_H
