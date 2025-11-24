#include "include/Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher(string id) {
    teacherID = id;
    userID = id;
    role = "Teacher";
}

void Teacher::markAttendance() {
    cout << "[Teacher::markAttendance] Placeholder\n";
}

void Teacher::viewAttendance() {
    cout << "[Teacher::viewAttendance] Placeholder\n";
}

vector<string> Teacher::getSubjectList() const {
    return assignedSubjects;
}
