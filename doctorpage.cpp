#include "doctorpage.h"
#include "ui_doctorpage.h"
#include <QFile>
#include <QPixmap>
#include <QTextStream>
#include <QStandardItemModel>
#include<QMessageBox>

DoctorPage::DoctorPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DoctorPage)
{
    ui->setupUi(this);
     ui->stackedWidget->setCurrentIndex(0);
     connect(ui->logoutBtn,&QPushButton::clicked,this,&DoctorPage::logoutfun);
     connect(ui->searchBtn, &QPushButton::clicked, this, &DoctorPage::searchfun);
     connect(ui->vpl, &QPushButton::clicked, this, &DoctorPage::on_vpl_clicked);

}

DoctorPage::~DoctorPage()
{
    delete ui;
}

void DoctorPage::logoutfun()
{
    emit requestLogout();
    this->close();
}
void DoctorPage::setDoctorName(const QString &name) {
    currentDoctorName = name;
     loadAppointments();
}
void DoctorPage::loadAppointments()
{
    QFile file("appointments.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open appointments.txt");
        return;
    }

    QTextStream in(&file);
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();

        QStringList parts = line.split(',');
        if (parts.size() < 4) continue;

        ui->tableWidget->insertRow(row);

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(parts[0]));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(parts[1]));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(parts[2]));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(parts[3]));

        ++row;
    }

    file.close();
}
void DoctorPage::loadPatientData() {
    QFile file("patients.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open patients.txt");
        return;
    }

    idList.clear(); nameList.clear(); ageList.clear(); genderList.clear();
    bloodGroupList.clear(); diseaseList.clear(); dateList.clear();
    timeList.clear(); bedList.clear(); roomList.clear();

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split(',');

        if (parts.size() == 10) {
            idList << parts[0];
            nameList << parts[1];
            ageList << parts[2];
            genderList << parts[3];
            bloodGroupList << parts[4];
            dateList << parts[5];
            timeList << parts[6];
            diseaseList << parts[7];
            bedList << parts[8];
            roomList << parts[9];
        }
    }

    file.close();
}


void DoctorPage::on_vpl_clicked()
{
    loadPatientData();

    if (idList.isEmpty()) {
        QMessageBox::information(this, "Patient IDs", "No patient IDs found.");
        return;
    }

    QString allIds = idList.join(", ");
    QMessageBox::information(this, "Patient IDs", "Patient IDs:\n" + allIds);

}


void DoctorPage::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void DoctorPage::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
      loadAppointments();
}


void DoctorPage::on_showbb_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void DoctorPage::searchfun()
{
    loadPatientData();
    QString searchID = ui->lineEdit_2->text().trimmed();
    bool found = false;

    for (int i = 0; i < idList.size(); ++i) {
        if (idList[i] == searchID) {
            found = true;
            QString details = "Patient ID: " + idList[i] + "\n"
                              + "Name: " + nameList[i] + "\n"
                              + "Age: " + ageList[i] + "\n"
                              + "Gender: " + genderList[i] + "\n"
                              + "Blood Group: " + bloodGroupList[i] + "\n"
                              + "Date: " + dateList[i] + "\n"
                              + "Time: " + timeList[i] + "\n"
                              + "Disease: " + diseaseList[i] + "\n"
                              + "Bed: " + bedList[i] + "\n"
                              + "Room: " + roomList[i];

            QMessageBox::information(this, "Patient Found", details);
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Not Found", "No patient found with ID: " + searchID);
    }

    ui->lineEdit_2->clear();
}


void DoctorPage::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void DoctorPage::on_submitBtn_clicked()
{
    QString patientID = ui->lineEdit->text().trimmed();
    QString notes = ui->textEdit->toPlainText().trimmed();

    if (patientID.isEmpty() || notes.isEmpty()) {
        QMessageBox::warning(this, "Missing Information", "Please fill both Patient ID and Notes.");
        return;
    }

    QFile file("prescriptions.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open prescriptions.txt");
        return;
    }

    QTextStream out(&file);
    out << patientID << "," << notes.replace("\n", "\\n") << "\n";
    file.close();

    QMessageBox::information(this, "Success", "Prescription saved successfully.");
    ui->lineEdit->clear();
    ui->textEdit->clear();
}


void DoctorPage::on_pushButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void DoctorPage::on_pushButton_7_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

