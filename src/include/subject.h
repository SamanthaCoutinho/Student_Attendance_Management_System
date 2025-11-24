#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

class Subject {
private:
    std::string subjectID;
    std::string subjectName;

public:
    Subject(std::string id, std::string name);

    std::string getSubjectID() const;
    std::string getSubjectName() const;
};

#endif
