#include "include/subject.h"
#include <string>

using namespace std;

Subject::Subject(string id, string name)
    : subjectID(id), subjectName(name) {}

string Subject::getSubjectID() const {
    return subjectID;
}

string Subject::getSubjectName() const {
    return subjectName;
}
