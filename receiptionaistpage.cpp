#include "receiptionaistpage.h"
#include "ui_receiptionaistpage.h"
#include <QString>
#include <QMessageBox>
#include <QFile>
ReceiptionaistPage::ReceiptionaistPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReceiptionaistPage)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->submit,&QPushButton::clicked,this,&ReceiptionaistPage::submitfun);
    connect(ui->search,&QPushButton::clicked,this,&ReceiptionaistPage::searchfun);
     connect(ui->logoutBtn,&QPushButton::clicked,this,&ReceiptionaistPage::logoutfun);
    connect(ui->deleteBtn,&QPushButton::clicked,this,&ReceiptionaistPage::deletefun);
     connect(ui->UpdateBtn,&QPushButton::clicked,this,&ReceiptionaistPage::updatefun);
    connect(ui->showBtn,&QPushButton::clicked,this,&ReceiptionaistPage::showPatientIDs);
     connect(ui->confirm,&QPushButton::clicked,this,&ReceiptionaistPage::confirmfun);
    connect(ui->loadBtn, &QPushButton::clicked, this, &ReceiptionaistPage::loadfun);


}
ReceiptionaistPage::~ReceiptionaistPage()
{
    delete ui;
}
QStringList idList;
QStringList nameList;
QStringList ageList;
QStringList genderList;
QStringList bloodGroupList;
QStringList diseaseList;
QStringList dateList;
QStringList timeList;
QStringList bedList;
QStringList roomList;
void ReceiptionaistPage::submitfun()
{
    QString id=ui->patientIDLineEdit->text();
    QString name=ui->nameLineEdit->text();
    QString age=ui->ageLineEdit->text();
    QString gender=ui->genderComboBox->currentText();
    QString bloodgroup=ui->bloodGroupComboBox->currentText();
    QString date=ui->dateDateEdit->date().toString("dd-MM-yyyy");
    QString time=ui->timeTimeEdit->time().toString("hh:mm:ss Ap");
    QString disease=ui->diseaseLineEdit->text();
    QString bed=ui->bedComboBox->currentText();
    QString room=ui->roomNoLineEdit->text();

    idList.append(id);
    nameList.append(name);
    ageList.append(age);
    genderList.append(gender);
    bloodGroupList.append(bloodgroup);
    dateList.append(date);
    timeList.append(time);
    diseaseList.append(disease);
    bedList.append(bed);
    roomList.append(room);
    QFile file("patients.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << id << "," << name << "," << age << "," << gender << ","
            << bloodgroup << "," << date << "," << time << "," << disease << ","
            << bed << "," << room << "\n";
        file.close();
    } else {
        QMessageBox::warning(this, "Error", "Failed to save patient to file.");
        return;
    }
    ui->patientIDLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->ageLineEdit->clear();
    ui->roomNoLineEdit->clear();
    ui->diseaseLineEdit->clear();
    ui->genderComboBox->setCurrentIndex(0);
    ui->bloodGroupComboBox->setCurrentIndex(0);
    ui->bedComboBox->setCurrentIndex(0);
    ui->dateDateEdit->setDate(QDate::currentDate());
    ui->timeTimeEdit->setTime(QTime::currentTime());
    QMessageBox::information(this,"Success","Patient Added Successfully!");

}
void ReceiptionaistPage::on_regBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void ReceiptionaistPage::on_back1_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}
void ReceiptionaistPage::on_searchBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void ReceiptionaistPage::searchfun()
{
    QString searchID = ui->searchIDLineEdit->text();
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

    ui->searchIDLineEdit->clear();
}

void ReceiptionaistPage::on_back3_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void ReceiptionaistPage::logoutfun()
{
    emit requestLogout();
    this->close();
}


void ReceiptionaistPage::on_back2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void ReceiptionaistPage::on_delete_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void ReceiptionaistPage::deletefun()
{
    QString id = ui->deleteIDLineEdit->text().trimmed();
    bool found = false;

    for (int i = 0; i < idList.length(); ++i) {
        if (id == idList[i]) {
            found = true;

            idList.removeAt(i);
            nameList.removeAt(i);
            ageList.removeAt(i);
            genderList.removeAt(i);
            bloodGroupList.removeAt(i);
            diseaseList.removeAt(i);
            dateList.removeAt(i);
            timeList.removeAt(i);
            bedList.removeAt(i);
            roomList.removeAt(i);

            QMessageBox::information(this, "Deleted", "Patient record deleted successfully.");
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Not Found", "No patient found with the given ID.");
    }

    ui->deleteIDLineEdit->clear();
}

void ReceiptionaistPage::on_upBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void ReceiptionaistPage::updatefun()
{
    QString id = ui->updateIDLineEdit->text().trimmed();
    QString newDisease = ui->updateDiseaseLineEdit->text().trimmed();
    bool found = false;

    for (int i = 0; i < idList.length(); ++i) {
        if (id == idList[i]) {
            found = true;
            diseaseList[i] = newDisease;

            QMessageBox::information(this, "Success",
                                     "Disease updated to: " + diseaseList[i]);
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Error", "Invalid Patient ID!");
    }

    ui->updateIDLineEdit->clear();
    ui->updateDiseaseLineEdit->clear();
}

void ReceiptionaistPage::on_back3_clicked()
{
ui->stackedWidget->setCurrentIndex(0);
}

void ReceiptionaistPage::showPatientIDs()
{
    if (idList.isEmpty()) {
        QMessageBox::information(this, "Patient IDs", "No patient IDs added yet.");
        return;
    }

    QString allIds = idList.join(", ");
    QMessageBox::information(this, "Patient IDs", "Patient IDs:\n" + allIds);
}

void ReceiptionaistPage::on_bookBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void ReceiptionaistPage::confirmfun()
{
    QString patient = ui->selectPatientLineEdit->text();
    QString doctor = ui->linedoc->text();
    QString date = ui->date->date().toString("dd/MM/yyyy");
    QString time = ui->time->time().toString("hh:mm AP");

    QFile file("appointments.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << patient << "," << doctor << "," << date << "," << time << "\n";
        file.close();

        QMessageBox::information(this, "Success", "Appointment booked successfully!");
        ui->selectPatientLineEdit->clear();
        ui->linedoc->clear();
    } else {
        QMessageBox::warning(this, "Error", "Failed to save appointment.");
    }
}

void ReceiptionaistPage::on_back4_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void ReceiptionaistPage::on_doctroadv_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void ReceiptionaistPage::loadfun()
{
    QString searchID = ui->lineedit->text().trimmed();
    if (searchID.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a patient ID.");
        return;
    }

    QFile file("prescriptions.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open prescriptions.txt");
        return;
    }

    QTextStream in(&file);
    QString advice;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');
        if (parts.size() >= 2 && parts[0] == searchID) {
            advice = parts.mid(1).join(",").replace("\\n", "\n");
            break;
        }
    }

    file.close();

    if (advice.isEmpty()) {
        QMessageBox::information(this, "No Advice", "No prescription found for Patient ID: " + searchID);
    } else {
        ui->textEdit->setPlainText(advice);
    }
}


void ReceiptionaistPage::on_back4_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

