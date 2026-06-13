#pragma once
#ifndef STAFF_H
#define STAFF_H

#include "Person.h"

class Staff : public Person {
protected:
    string staffId;
    string department;
    double salary;

public:
    Staff();
    Staff(string staffId, string name, string address, string phone, string department, double salary);

    bool login();
};

#endif