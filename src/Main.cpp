#include <iostream>
#include "include/Admin.h"
#include "include/Teacher.h"
#include "include/Student.h"

using namespace std;

void showMenu() {
    cout << "\n===== Attendance Management System =====\n";
    cout << "1. Admin Login\n";
    cout << "2. Teacher Login\n";
    cout << "3. Student Login\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

int main() {
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\nAdmin selected\n";
                Admin admin("A001");
                admin.addStudent();
                break;
            }
            case 2: {
                cout << "\nTeacher selected\n";
                Teacher teacher("T001");
                teacher.markAttendance();
                break;
            }
            case 3: {
                cout << "\nStudent selected\n";
                Student student("S001");
                student.viewAttendance();
                break;
            }
            case 4:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}
