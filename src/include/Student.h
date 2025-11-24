#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "User.h"

class Student : public User {
private:
    std::string rollNo;
    std::string name;
    std::string programID;
    std::string semesterID;
    std::string academicYear;
    std::vector<std::string> attendanceList;

public:
    Student() = default;
    Student(std::string roll);

    void viewAttendance();
    std::vector<std::string> getSubjects() const;
    void viewWeeklyReport();
    void viewMonthlyReport();

    std::string getRollNo() const;
};

#endif
