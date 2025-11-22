#include "User.h"
#include <iostream>

using namespace std;

User::User(string u, string p, string id, string r)
    : username(u), password(p), userID(id), role(r) {}

bool User::login(string u, string p) {
    cout << "[User::login] Placeholder login logic\n";
    return false;
}

void User::logout() {
    cout << "[User::logout] Logged out\n";
}

string User::getUserID() const {
    return userID;
}

string User::getRole() const {
    return role;
}
