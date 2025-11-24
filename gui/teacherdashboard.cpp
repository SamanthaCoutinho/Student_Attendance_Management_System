#include "teacherdashboard.h"
#include "ui_teacherdashboard.h"

TeacherDashboard::TeacherDashboard(QString username, QWidget *parent)
    : QDialog(parent),
    ui(new Ui::TeacherDashboard)
{
    ui->setupUi(this);
    loggedUser = username;

    setWindowTitle("Teacher Dashboard - " + loggedUser);
}

TeacherDashboard::~TeacherDashboard()
{
    delete ui;
}


