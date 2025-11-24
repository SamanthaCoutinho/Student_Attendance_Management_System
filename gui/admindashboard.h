#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QDialog>

namespace Ui {
class AdminDashboard;
}

class AdminDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDashboard(QWidget *parent = nullptr);
    ~AdminDashboard();

private slots:
    void on_manageStudentsButton_clicked();
    void on_manageAttendanceButton_clicked();
    void on_logoutButton_clicked();

private:
    Ui::AdminDashboard *ui;
};

#endif // ADMINDASHBOARD_H


