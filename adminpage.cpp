#include "adminpage.h"
#include "ui_adminpage.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QInputDialog>
#include <QFile>

AdminPage::AdminPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminPage)
{
    ui->setupUi(this);
    loadAppointments();
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->doctorBtn, &QPushButton::clicked, this, &AdminPage::doctorfun);
    connect(ui->add, &QPushButton::clicked, this, &AdminPage::addBtn);
connect(ui->add2, &QPushButton::clicked, this, &AdminPage::addfun);
connect(ui->logoutBtn,&QPushButton::clicked,this,&AdminPage::logoutfun);
connect(ui->showBtn, &QPushButton::clicked, this, &AdminPage::showfun);
connect(ui->searchBtn, &QPushButton::clicked, this, &AdminPage::searchfun);
    QPixmap pix("C:/Users/User/Downloads/Final_Project/1693324437512.png");
    int w = ui->image->width();
    int h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->userTable->setColumnCount(4);
    ui->userTable->setHorizontalHeaderLabels({"User Name", "Role", "Status", "Action"});
    ui->userTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->userTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->userTable->horizontalHeader()->setStretchLastSection(true);
    loadUserData();

}

AdminPage::~AdminPage()
{
    delete ui;
}


void AdminPage::doctorfun()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void AdminPage::addBtn()
{
ui->stackedWidget->setCurrentIndex(2);

}

void AdminPage::addUserRow(const QString &username, const QString &role, const QString &status) {
    int row = ui->userTable->rowCount();
    ui->userTable->insertRow(row);

    ui->userTable->setItem(row, 0, new QTableWidgetItem(username));
    ui->userTable->setItem(row, 1, new QTableWidgetItem(role));
    ui->userTable->setItem(row, 2, new QTableWidgetItem(status));

    QPushButton *editBtn = new QPushButton("Edit");
    QPushButton *delBtn = new QPushButton("Delete");
    QWidget *actionWidget = new QWidget();
    QHBoxLayout *layout = new QHBoxLayout(actionWidget);
    layout->addWidget(editBtn);
    layout->addWidget(delBtn);
    layout->setContentsMargins(5, 0, 5, 0);
    actionWidget->setLayout(layout);

    ui->userTable->setCellWidget(row, 3, actionWidget);


    connect(editBtn, &QPushButton::clicked, this, [=]() {
        QTableWidgetItem *usernameItem = ui->userTable->item(row, 0);
        QTableWidgetItem *roleItem = ui->userTable->item(row, 1);
        QTableWidgetItem *statusItem = ui->userTable->item(row, 2);

        QString oldUsername = usernameItem->text().trimmed();
        QString oldRole = roleItem->text().trimmed();
        QString oldStatus = statusItem->text().trimmed();

        bool ok;
        QString newUsername = QInputDialog::getText(this, "Edit Username", "Username:", QLineEdit::Normal, oldUsername, &ok);
        if (!ok || newUsername.isEmpty()) return;

        QString newRole = QInputDialog::getText(this, "Edit Role", "Role:", QLineEdit::Normal, oldRole, &ok);
        if (!ok || newRole.isEmpty()) return;

        QString newStatus = QInputDialog::getText(this, "Edit Status", "Status:", QLineEdit::Normal, oldStatus, &ok);
        if (!ok || newStatus.isEmpty()) return;


        usernameItem->setText(newUsername);
        roleItem->setText(newRole);
        statusItem->setText(newStatus);


        QFile file("users.txt");
        QStringList updatedLines;

        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            while (!in.atEnd()) {
                QString line = in.readLine().trimmed();
                QStringList parts = line.split(",");
                if (parts.size() == 3) {
                    if (parts[0] == oldUsername && parts[1] == oldRole && parts[2] == oldStatus) {
                        updatedLines << newUsername + "," + newRole + "," + newStatus;
                    } else {
                        updatedLines << line;
                    }
                }
            }
            file.close();

            if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
                QTextStream out(&file);
                for (const QString &line : updatedLines) {
                    out << line << "\n";
                }
                file.close();
                QMessageBox::information(this, "Updated", "User updated successfully.");
            }
        }
    });


    connect(delBtn, &QPushButton::clicked, this, [=]() {
        int currentRow = ui->userTable->indexAt(delBtn->parentWidget()->pos()).row();

        QString usernameToDelete = ui->userTable->item(currentRow, 0)->text().trimmed();
        QString roleToDelete = ui->userTable->item(currentRow, 1)->text().trimmed();
        QString statusToDelete = ui->userTable->item(currentRow, 2)->text().trimmed();

        ui->userTable->removeRow(currentRow);

        QFile ufile("users.txt");
        if (ufile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&ufile);
            QStringList userLines;
            while (!in.atEnd()) {
                QString line = in.readLine().trimmed();
                QStringList parts = line.split(",");
                if (parts.size() == 3 && !(parts[0] == usernameToDelete && parts[1] == roleToDelete && parts[2] == statusToDelete)) {
                    userLines.append(line);
                }
            }
            ufile.close();

            if (ufile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
                QTextStream out(&ufile);
                for (const QString &line : userLines) {
                    out << line << "\n";
                }
                ufile.close();
                QMessageBox::information(this, "Deleted", "User deleted successfully.");
            }
        }
    });
}




void AdminPage::addfun()
{
    bool ok;


    QString username = QInputDialog::getText(this, "Add User", "Username:", QLineEdit::Normal, "", &ok);
    if (!ok || username.isEmpty()) return;

    QString role = QInputDialog::getText(this, "Add User", "Role:", QLineEdit::Normal, "", &ok);
    if (!ok || role.isEmpty()) return;

    QString status = QInputDialog::getText(this, "Add User", "Status:", QLineEdit::Normal, "", &ok);
    if (!ok || status.isEmpty()) return;
    QFile file("users.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << username << "," << role << "," << status << "\n";
        file.close();
    }

    addUserRow(username, role, status);
}


void AdminPage::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void AdminPage::on_back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void AdminPage::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void AdminPage::loadUserData()
{
    ui->userTable->setRowCount(0);

    QFile file("users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split(",");
        if (parts.size() == 3) {
            QString username = parts[0];
            QString role = parts[1];
            QString status = parts[2];
            addUserRow(username, role, status);
        }
    }

    file.close();
}

void AdminPage::logoutfun()
{
    emit requestLogout();
    this->close();
}
void AdminPage::loadAppointments()
{
    QFile file("appointments.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open appointments.txt");
        return;
    }

    QTextStream in(&file);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels({"Patient", "Doctor", "Date", "Time","Action"});

    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split(",");
        if (parts.size() == 4) {
            addAppointmentRow(parts[0], parts[1], parts[2], parts[3]);
        }
    }

    file.close();
}

void AdminPage::on_viewappBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointmentsPage);
     loadAppointments();
}


void AdminPage::addAppointmentRow(const QString &patient, const QString &doctor, const QString &date, const QString &time) {
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(patient));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(doctor));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(date));
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(time));

    // Delete button
    QPushButton *delBtn = new QPushButton("Delete");
    ui->tableWidget->setCellWidget(row, 4, delBtn);

    connect(delBtn, &QPushButton::clicked, this, [=]() {
        int rowToDelete = ui->tableWidget->indexAt(delBtn->pos()).row();
        if (rowToDelete >= 0) {
            QString patientName = ui->tableWidget->item(rowToDelete, 0)->text().trimmed();
            QString doctorName = ui->tableWidget->item(rowToDelete, 1)->text().trimmed();
            QString dateText = ui->tableWidget->item(rowToDelete, 2)->text().trimmed();
            QString timeText = ui->tableWidget->item(rowToDelete, 3)->text().trimmed();

            // Remove row
            ui->tableWidget->removeRow(rowToDelete);

            // Remove from file
            QFile file("appointments.txt");
            QStringList updatedLines;
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream in(&file);
                while (!in.atEnd()) {
                    QString line = in.readLine().trimmed();
                    QStringList parts = line.split(",");
                    if (parts.size() == 4 && !(parts[0] == patientName && parts[1] == doctorName &&
                                               parts[2] == dateText && parts[3] == timeText)) {
                        updatedLines << line;
                    }
                }
                file.close();

                if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
                    QTextStream out(&file);
                    for (const QString &line : updatedLines)
                        out << line << "\n";
                    file.close();
                    QMessageBox::information(this, "Deleted", "Appointment deleted successfully.");
                }
            }
        }
    });
}


void AdminPage::on_back_4_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->page);
}


void AdminPage::on_pushButton_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}
void AdminPage::loadPatientData() {
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


void AdminPage::showfun()
{
    loadPatientData();

    if (idList.isEmpty()) {
        QMessageBox::information(this, "Patient IDs", "No patient IDs found.");
        return;
    }

    QString allIds = idList.join(", ");
    QMessageBox::information(this, "Patient IDs", "Patient IDs:\n" + allIds);
}


void AdminPage::on_back_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void AdminPage::searchfun()
{
    loadPatientData();
    QString searchID = ui->lineEdit_3->text().trimmed();
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

    ui->lineEdit_3->clear();
}


void AdminPage::on_back_14_clicked()
{
       ui->stackedWidget->setCurrentIndex(0);
}


void AdminPage::on_back_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

