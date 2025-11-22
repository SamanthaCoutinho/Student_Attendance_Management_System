#ifndef REPORT_H
#define REPORT_H

#include <string>
#include "AttendanceManager.h"

class Report {
public:
    Report();

    void generateDailyReport(std::string date);
    void generateMonthlyReport(std::string month);

    void displayStudentReport(std::string studentID);
};

#endif