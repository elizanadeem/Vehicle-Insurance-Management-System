#include "Person.h"

Person::Person() {
    personId = "";
    name = "";
    address = "";
    phone = "";
}

Person::Person(string personId, string name, string address, string phone) {
    this->personId = personId;
    this->name = name;
    this->address = address;
    this->phone = phone;
}

string Person::getPersonId() {
    return personId;
}

string Person::getName() {
    return name;
}

string Person::getDetails() {
    return personId + " | " + name + " | " + address + " | " + phone;
}