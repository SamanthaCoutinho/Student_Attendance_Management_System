#ifndef DASHBOARDWINDOW_H
#define DASHBOARDWINDOW_H

#include <QMainWindow>

namespace Ui {
class DashboardWindow;
}

class DashboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashboardWindow(QWidget *parent = nullptr);
    ~DashboardWindow();

private slots:
    void on_logoutButton_clicked();

    void on_attendanceButton_clicked();

    void on_studentsButton_clicked();

private:
    Ui::DashboardWindow *ui;
};

#endif // DASHBOARDWINDOW_H
