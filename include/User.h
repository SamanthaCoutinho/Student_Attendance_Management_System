#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string username;
    std::string password;
    std::string userID;
    std::string role;

public:
    User() = default;
    User(std::string u, std::string p, std::string id, std::string r);

    bool login(std::string u, std::string p);
    void logout();

    std::string getUserID() const;
    std::string getRole() const;
};

#endif
