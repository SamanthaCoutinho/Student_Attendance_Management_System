#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>
#include <vector>
#include "Semester.h"

class Program {
private:
    std::string programID;
    std::string programName;
    std::vector<Semester*> semesters;

public:
    Program(std::string id, std::string name);

    void addSemester(Semester* sem);
    std::string getProgramID() const;
    std::string getProgramName() const;
    std::vector<Semester*> getSemesters() const;
};

#endif
