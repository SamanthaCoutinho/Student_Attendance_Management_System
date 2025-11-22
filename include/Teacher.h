#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include "User.h"

class Teacher : public User {
private:
    std::string teacherID;
    std::vector<std::string> assignedSubjects;
    std::string department;

public:
    Teacher() = default;
    Teacher(std::string id);

    void markAttendance();
    void viewAttendance();
    std::vector<std::string> getSubjectList() const;
};

#endif
