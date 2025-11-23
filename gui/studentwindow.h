#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class StudentWindow;
}

class StudentWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentWindow(QWidget *parent = nullptr);
    ~StudentWindow();

private slots:
    void on_addStudentButton_clicked();

    void on_viewStudentsButton_clicked();

    void on_backButton_clicked();

private:
    Ui::StudentWindow *ui;
};

#endif // STUDENTWINDOW_H
