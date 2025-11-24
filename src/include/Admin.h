#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include "User.h"

class Admin : public User {
private:
    std::string adminID;

public:
    Admin() = default;
    Admin(std::string id);

    void addStudent();
    void editStudent();
    void deleteStudent();
    void addSubject();
    void generateReport();
};

#endif
