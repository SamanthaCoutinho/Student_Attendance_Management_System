#ifndef ATTENDANCE_MANAGER_H
#define ATTENDANCE_MANAGER_H

#include <vector>
#include "Attendance.h"

class AttendanceManager {
private:
    std::vector<Attendance> attendanceList;

public:
    AttendanceManager();

    void markAttendance(const Attendance &record);
    float getPercentage(std::string studentID, std::string subjectID);
    std::vector<Attendance> getAttendanceBySubject(std::string subjectID);

    void loadFromFile();
    void saveToFile();
};

#endif
