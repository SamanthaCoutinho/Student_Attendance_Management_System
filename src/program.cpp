#include "include/Program.h"
#include <string>
#include <vector>

using namespace std;

Program::Program(string id, string name)
    : programID(id), programName(name) {}

void Program::addSemester(Semester* sem) {
    semesters.push_back(sem);
}

string Program::getProgramID() const {
    return programID;
}

string Program::getProgramName() const {
    return programName;
}

vector<Semester*> Program::getSemesters() const {
    return semesters;
}
