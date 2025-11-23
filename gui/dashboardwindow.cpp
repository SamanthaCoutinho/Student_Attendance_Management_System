#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include "loginwindow.h"
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
    QMessageBox::information(this, "Manage Attendance", "Attendance screen coming soon.");
}


void DashboardWindow::on_studentsButton_clicked()
{
    QMessageBox::information(this, "Manage Students", "Student management screen coming soon.");
}

