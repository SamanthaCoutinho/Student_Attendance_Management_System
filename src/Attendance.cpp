#include "Attendance.h"

Attendance::Attendance() {}

Attendance::Attendance(std::string studentID, std::string subjectID, std::string date, bool status) {
    this->studentID = studentID;
    this->subjectID = subjectID;
    this->date = date;
    this->status = status;
}

std::string Attendance::getStudentID() const {
    return studentID;
}

std::string Attendance::getSubjectID() const {
    return subjectID;
}

std::string Attendance::getDate() const {
    return date;
}

bool Attendance::getStatus() const {
    return status;
}

void Attendance::setStatus(bool status) {
    this->status = status;
}
