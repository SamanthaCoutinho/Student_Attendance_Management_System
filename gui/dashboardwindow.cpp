#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include "loginwindow.h"
#include "attendancewindow.h"
#include "studentwindow.h"
#include <QMessageBox>

DashboardWindow::DashboardWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow)
{
    ui->setupUi(this);
}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}

void DashboardWindow::on_logoutButton_clicked()
{
    LoginWindow *login = new LoginWindow();
    login->show();
    this->close();
}

void DashboardWindow::on_attendanceButton_clicked()
{
    AttendanceWindow *aw = new AttendanceWindow();
    aw->show();
}

void DashboardWindow::on_studentsButton_clicked()
{
    StudentWindow *sw = new StudentWindow();
    sw->show();
}
