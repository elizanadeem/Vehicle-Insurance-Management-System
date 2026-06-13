#include "Staff.h"

Staff::Staff() : Person() {
    staffId = "";
    department = "";
    salary = 0;
}

Staff::Staff(string staffId, string name, string address, string phone, string department, double salary)
    : Person(staffId, name, address, phone) {
    this->staffId = staffId;
    this->department = department;
    this->salary = salary;
}

bool Staff::login() {
    return true;
}