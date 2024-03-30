#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
struct Employee {
    string surname;
    int id;
    int birthMonth;
};
void printEmployee(const Employee& emp) {
    cout << "прізвище: " << emp.surname << ", ID: " << emp.id << ", місяць народження: " << emp.birthMonth << endl;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int MAX_EMPLOYEES = 5;
    Employee employees[MAX_EMPLOYEES] = {
        {"шевченко", 1, 3},
        {"мельник", 2, 5},
        {"ковальчук", 3, 7},
        {"кравченко", 4, 9},
        {"бойко", 5, 11}
    };
    cout << "список співробітників:" << endl;
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        printEmployee(employees[i]);
    }
    int targetMonth;
    cout << "\nвведіть місяць народження: ";
    cin >> targetMonth;

    cout << "ця людина народилася в місяці " << targetMonth << ":" << endl;
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        if (employees[i].birthMonth == targetMonth) {
            printEmployee(employees[i]);
        }
    }
    return 0;
}