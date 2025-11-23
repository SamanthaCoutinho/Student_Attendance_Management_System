#include "studentwindow.h"
#include "ui_studentwindow.h"
#include <QMessageBox>
#include "dashboardwindow.h"


StudentWindow::StudentWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StudentWindow)
{
    ui->setupUi(this);
}

StudentWindow::~StudentWindow()
{
    delete ui;
}

void StudentWindow::on_addStudentButton_clicked()
{
    QMessageBox::information(this, "Add Student", "Add Student screen coming soon.");

}


void StudentWindow::on_viewStudentsButton_clicked()
{
     QMessageBox::information(this, "View Students", "Student List screen coming soon.");

}


void StudentWindow::on_backButton_clicked()
{
    DashboardWindow *dash = new DashboardWindow();
    dash->show();
    this->close();
}

