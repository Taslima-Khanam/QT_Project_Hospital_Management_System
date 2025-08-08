#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "adminpage.h"
#include "doctorpage.h"
#include "receiptionaistpage.h"
#include <QPixmap>
#include <QMessageBox>
#include <QFile>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->adminBtn,&QPushButton::clicked,this,&MainWindow::adminfun);
    connect(ui->doctorBtn,&QPushButton::clicked,this,&MainWindow::doctorfun);
    connect(ui->reciptionistBtn,&QPushButton::clicked,this,&MainWindow::reciptionistfun);
     connect(ui->back1,&QPushButton::clicked,this,&MainWindow::backBtn);
connect(ui->loginBtn,&QPushButton::clicked,this,&MainWindow::loginfun);




QPixmap pix("C:/Users/User/Downloads/Final_Project/hospital.png");
    int w=ui->image->width();
     int h=ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix1("C:/Users/User/Downloads/Final_Project/1702362010.png");
     int w1=ui->image2->width();
     int h1=ui->image2->height();
    ui->image2->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::adminfun()
{
    currentrole ="admin";
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::doctorfun()
{
    currentrole ="doctor";
  ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::reciptionistfun()
{
    currentrole ="receptionist";
  ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::backBtn()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->username->clear();
    ui->password->clear();
}

void MainWindow::showEvent(QShowEvent *event) {
    QMainWindow::showEvent(event);
    ui->username->clear();
    ui->password->clear();
}

void MainWindow::loginfun()
{

    QString uname = ui->username->text();
    QString pass = ui->password->text();


    QStringList doctorUsernames;
    QStringList recipusername;
    QFile file("users.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine().trimmed();
            QStringList parts = line.split(",");
            if (parts.size() == 3) {
                QString username = parts[0];
                QString role = parts[1].toLower();
                if (role == "doctor") {
                    doctorUsernames.append(username);
                } else if (role == "receptionist") {
                    recipusername.append(username);
                }
            }
        }
        file.close();
    }



    if (currentrole == "admin") {
        if (uname == "Taslima" && pass == "C243463") {
            AdminPage *admin = new AdminPage(this);
            connect(admin, &AdminPage::requestLogout, this, [=]() {
                ui->stackedWidget->setCurrentIndex(0);
                this->show();
            });
            admin->show();
            this->hide();
        } else {
            QMessageBox::warning(this, "Login Failed", "Wrong Username/Password");
            ui->username->clear();
            ui->password->clear();
        }
    }
    else if (currentrole == "doctor") {
        if (doctorUsernames.contains(uname) && pass == "doc123") {
            DoctorPage *doctor = new DoctorPage(this);
            connect(doctor, &DoctorPage::requestLogout, this, [=]() {
                ui->stackedWidget->setCurrentIndex(0);
                this->show();
            });

            doctor->show();
            this->hide();
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid doctor username or password.");
            ui->username->clear();
            ui->password->clear();
        }
    }
    else if (currentrole == "receptionist") {
        if (recipusername.contains(uname) && pass == "rep123") {
            ReceiptionaistPage *receptionist = new ReceiptionaistPage(this);
            connect(receptionist, &ReceiptionaistPage::requestLogout, this, [=]() {
                ui->stackedWidget->setCurrentIndex(0);
                this->show();
            });

            receptionist->show();
            this->hide();
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid receptionist username or password.");
            ui->username->clear();
            ui->password->clear();
        }
    }
}


