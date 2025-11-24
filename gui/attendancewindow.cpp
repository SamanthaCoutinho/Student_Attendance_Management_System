#include "attendancewindow.h"
#include "ui_attendancewindow.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>

AttendanceWindow::AttendanceWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AttendanceWindow)
{
    ui->setupUi(this);

    // Set table headers
    ui->tableAttendance->setColumnCount(3);
    QStringList headers;
    headers << "Name" << "Roll No" << "Present/Absent";
    ui->tableAttendance->setHorizontalHeaderLabels(headers);

    ui->tableAttendance->setRowCount(0);
    ui->tableAttendance->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Load CSV data
    loadStudentData();
}

AttendanceWindow::~AttendanceWindow()
{
    delete ui;
}

void AttendanceWindow::loadStudentData()
{
    QFile file("students.csv");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open students.csv");
        return;
    }

    QTextStream in(&file);

    int row = 0;
    while (!in.atEnd()) {

        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (fields.size() < 2)
            continue;   // skip invalid lines

        ui->tableAttendance->insertRow(row);

        ui->tableAttendance->setItem(row, 0, new QTableWidgetItem(fields[0])); // Name
        ui->tableAttendance->setItem(row, 1, new QTableWidgetItem(fields[1])); // Roll No
        ui->tableAttendance->setItem(row, 2, new QTableWidgetItem(""));        // Present/Absent

        row++;
    }
}

