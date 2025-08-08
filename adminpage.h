#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QDialog>

namespace Ui {
class AdminPage;
}

class AdminPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr);
    ~AdminPage();

private slots:

    void doctorfun();
    void addUserRow(const QString &username, const QString &role, const QString &status);
     void addAppointmentRow(const QString &patient, const QString &doctor, const QString &date, const QString &time);
    void addBtn();

    void addfun();

    void on_pushButton_5_clicked();

    void on_back_2_clicked();

    void on_back_clicked();


    void logoutfun();
    void on_viewappBtn_clicked();

    void on_back_4_clicked();

    void on_pushButton_4_clicked();

    void showfun();

    void on_back_7_clicked();

    void searchfun();

    void on_back_14_clicked();

    void on_back_8_clicked();

signals:
    void requestLogout();
private:
    Ui::AdminPage *ui;
     void loadUserData();
    void loadAppointments();
     QStringList idList, nameList, ageList, genderList, bloodGroupList;
     QStringList diseaseList, dateList, timeList, bedList, roomList;

     void loadPatientData();
};

#endif // ADMINPAGE_H
