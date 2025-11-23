#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "dashboardwindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{

    QString username = ui->usern_Field->text();
    QString password = ui->Passw_Field->text();

    // Simple fixed login for demo
    if(username == "admin" && password == "1234")
    {
        DashboardWindow *dash = new DashboardWindow();
        dash->show();
        this->close();

     }
    else
    {
        QMessageBox::warning(this, "Error", "Invalid Username or Password!");
    }


}

