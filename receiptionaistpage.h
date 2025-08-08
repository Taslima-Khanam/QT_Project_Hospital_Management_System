#ifndef RECEIPTIONAISTPAGE_H
#define RECEIPTIONAISTPAGE_H

#include <QDialog>

namespace Ui {
class ReceiptionaistPage;
}

class ReceiptionaistPage : public QDialog
{
    Q_OBJECT

public:
    explicit ReceiptionaistPage(QWidget *parent = nullptr);
    ~ReceiptionaistPage();
signals:
    void enterinfo(const QString &id,const QString &nm,const QString &ag,const QString &gender,const QString &bloodgroup, const QString &date,const QString &time,const QString &di,const QString &bed,const QString &rn);
private slots:


    void submitfun();

    void on_regBtn_clicked();

    void on_back1_clicked();



    void on_searchBtn_clicked();

    void searchfun();

    void on_back3_2_clicked();

    void logoutfun();
    void on_back2_clicked();

    void on_delete_2_clicked();

    void deletefun();

    void on_upBtn_clicked();


    void updatefun();

    void on_back3_clicked();
    void showPatientIDs();

    void on_bookBtn_clicked();

    void confirmfun();

    void on_back4_clicked();

    void on_doctroadv_clicked();

    void loadfun();

    void on_back4_2_clicked();

signals:
    void requestLogout();
private:
    Ui::ReceiptionaistPage *ui;
};

#endif // RECEIPTIONAISTPAGE_H
