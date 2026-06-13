#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string personId;
    string name;
    string address;
    string phone;

public:
    Person();
    Person(string personId, string name, string address, string phone);

    string getPersonId();
    string getName();
    string getDetails();
};

#endif