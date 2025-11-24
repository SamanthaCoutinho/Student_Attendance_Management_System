#include "include/Student.h"
#include <iostream>

using namespace std;

Student::Student(string roll) {
    rollNo = roll;
    userID = roll;
    role = "Student";
}

void Student::viewAttendance() {
    cout << "[Student::viewAttendance] Placeholder\n";
}

vector<string> Student::getSubjects() const {
    return {};
}

void Student::viewWeeklyReport() {
    cout << "[Student::viewWeeklyReport] Placeholder\n";
}

void Student::viewMonthlyReport() {
    cout << "[Student::viewMonthlyReport] Placeholder\n";
}

string Student::getRollNo() const {
    return rollNo;
}
