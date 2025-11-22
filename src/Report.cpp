#include "Report.h"
#include <iostream>

Report::Report() {}

void Report::generateDailyReport(std::string date) {
    std::cout << "Generating daily report for: " << date << std::endl;
}

void Report::generateMonthlyReport(std::string month) {
    std::cout << "Generating monthly report for: " << month << std::endl;
}

void Report::displayStudentReport(std::string studentID) {
    std::cout << "Displaying report for student: " << studentID << std::endl;
}
