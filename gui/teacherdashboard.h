#ifndef TEACHERDASHBOARD_H
#define TEACHERDASHBOARD_H

#include <QDialog>

namespace Ui {
class TeacherDashboard;
}

class TeacherDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherDashboard(QString username, QWidget *parent = nullptr);
    ~TeacherDashboard();

private:
    Ui::TeacherDashboard *ui;
    QString loggedUser;
};

#endif // TEACHERDASHBOARD_H


