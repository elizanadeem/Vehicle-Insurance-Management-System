#include "Workshop.h"

Workshop::Workshop() {
    workshopId = "";
    name = "";
    address = "";
    contactNo = "";
    isRegistered = false;
}

Workshop::Workshop(string workshopId, string name, string address, string contactNo, bool isRegistered) {
    this->workshopId = workshopId;
    this->name = name;
    this->address = address;
    this->contactNo = contactNo;
    this->isRegistered = isRegistered;
}

string Workshop::getWorkshopId() {
    return workshopId;
}

bool Workshop::getRegistered() {
    return isRegistered;
}

string Workshop::toFileString() {
    return workshopId + "|" + name + "|" + address + "|" + contactNo + "|" + to_string(isRegistered);
}

void Workshop::display() {
    cout << "Workshop ID: " << workshopId << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Contact No: " << contactNo << endl;
    cout << "Registered: " << (isRegistered ? "Yes" : "No") << endl;
}