#ifndef SEMESTER_H
#define SEMESTER_H

#include <string>
#include <vector>
#include "Subject.h"

class Semester {
private:
    std::string semesterID;
    int semesterNumber;
    std::vector<Subject*> subjects;

public:
    Semester(std::string id, int number);

    void addSubject(Subject* sub);
    std::string getSemesterID() const;
    int getSemesterNumber() const;
    std::vector<Subject*> getSubjects() const;
};

#endif
