#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(string id) {
    adminID = id;
    userID = id;
    role = "Admin";
}

void Admin::addStudent() {
    cout << "[Admin::addStudent] Placeholder\n";
}

void Admin::editStudent() {
    cout << "[Admin::editStudent] Placeholder\n";
}

void Admin::deleteStudent() {
    cout << "[Admin::deleteStudent] Placeholder\n";
}

void Admin::addSubject() {
    cout << "[Admin::addSubject] Placeholder\n";
}

void Admin::generateReport() {
    cout << "[Admin::generateReport] Placeholder\n";
}
