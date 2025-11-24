#include "studentdashboard.h"
#include "ui_studentdashboard.h"

StudentDashboard::StudentDashboard(QString username, QWidget *parent)
    : QDialog(parent),
    ui(new Ui::StudentDashboard)
{
    ui->setupUi(this);
    loggedUser = username;

    setWindowTitle("Student Dashboard - " + loggedUser);
}

StudentDashboard::~StudentDashboard()
{
    delete ui;
}

