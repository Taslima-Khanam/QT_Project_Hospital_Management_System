#ifndef DOCTORPAGE_H
#define DOCTORPAGE_H

#include <QDialog>

namespace Ui {
class DoctorPage;
}

class DoctorPage : public QDialog
{
    Q_OBJECT

public:
    explicit DoctorPage(QWidget *parent = nullptr);
    ~DoctorPage();

    void setDoctorName(const QString &name);
    void loadAppointments();
signals:
    void requestLogout();
private slots:


    void logoutfun();

    void on_vpl_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_showbb_clicked();

    void searchfun();

    void on_pushButton_6_clicked();

    void on_submitBtn_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::DoctorPage *ui;
    QString currentDoctorName;
    QStringList idList, nameList, ageList, genderList, bloodGroupList;
    QStringList diseaseList, dateList, timeList, bedList, roomList;

    void loadPatientData();
};

#endif // DOCTORPAGE_H
