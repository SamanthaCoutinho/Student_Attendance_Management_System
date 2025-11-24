#ifndef ATTENDANCEWINDOW_H
#define ATTENDANCEWINDOW_H

#include <QDialog>

namespace Ui {
class AttendanceWindow;
}

class AttendanceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AttendanceWindow(QWidget *parent = nullptr);
    ~AttendanceWindow();

private:
    Ui::AttendanceWindow *ui;

    void loadStudentData();
};

#endif

