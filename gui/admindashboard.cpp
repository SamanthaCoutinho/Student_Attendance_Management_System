#include "admindashboard.h"
#include "ui_admindashboard.h"

AdminDashboard::AdminDashboard(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::AdminDashboard)
{
    ui->setupUi(this);
}

AdminDashboard::~AdminDashboard()
{
    delete ui;
}

void AdminDashboard::on_manageStudentsButton_clicked()
{
    // TODO
}

void AdminDashboard::on_manageAttendanceButton_clicked()
{
    // TODO
}

void AdminDashboard::on_logoutButton_clicked()
{
    close();
}

