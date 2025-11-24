#include "include/semester.h"
#include <string>
#include <vector>

using namespace std;

Semester::Semester(string id, string name)
    : semesterID(id), semesterName(name) {}

void Semester::addSubject(Subject* sub) {
    subjects.push_back(sub);
}

string Semester::getSemesterID() const {
    return semesterID;
}

string Semester::getSemesterName() const {
    return semesterName;
}

vector<Subject*> Semester::getSubjects() const {
    return subjects;
}
