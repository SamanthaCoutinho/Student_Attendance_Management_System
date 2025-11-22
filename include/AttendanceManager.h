#include "AttendanceManager.h"
#include <fstream>
#include <iostream>

AttendanceManager::AttendanceManager() {}

void AttendanceManager::markAttendance(const Attendance &record) {
    attendanceList.push_back(record);
}

float AttendanceManager::getPercentage(std::string studentID, std::string subjectID) {
    int total = 0, present = 0;

    for (auto &a : attendanceList) {
        if (a.getStudentID() == studentID && a.getSubjectID() == subjectID) {
            total++;
            if (a.getStatus()) present++;
        }
    }

    if (total == 0) return 0;
    return (present * 100.0f) / total;
}

std::vector<Attendance> AttendanceManager::getAttendanceBySubject(std::string subjectID) {
    std::vector<Attendance> result;

    for (auto &a : attendanceList) {
        if (a.getSubjectID() == subjectID) {
            result.push_back(a);
        }
    }

    return result;
}

void AttendanceManager::loadFromFile() {
    // TODO: read CSV (attendance.csv)
}

void AttendanceManager::saveToFile() {
    // TODO: write to CSV (attendance.csv)
}

