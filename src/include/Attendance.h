#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>

class Attendance {
private:
    std::string studentID;
    std::string subjectID;
    std::string date;
    bool status;   // true = present, false = absent

public:
    Attendance();
    Attendance(std::string studentID, std::string subjectID, std::string date, bool status);

    std::string getStudentID() const;
    std::string getSubjectID() const;
    std::string getDate() const;
    bool getStatus() const;

    void setStatus(bool status);
};

#endif
