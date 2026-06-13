#include "Customer.h"

Customer::Customer() : Person() {
    customerId = "";
    email = "";
    licenseNo = "";
    dateRegistered = "";
}

Customer::Customer(string customerId, string name, string address, string phone, string email, string licenseNo, string dateRegistered)
    : Person(customerId, name, address, phone) {
    this->customerId = customerId;
    this->email = email;
    this->licenseNo = licenseNo;
    this->dateRegistered = dateRegistered;
}

string Customer::getCustomerId() {
    return customerId;
}

string Customer::getEmail() {
    return email;
}

string Customer::getLicenseNo() {
    return licenseNo;
}

string Customer::getDateRegistered() {
    return dateRegistered;
}

string Customer::toFileString() {
    return customerId + "|" + name + "|" + address + "|" + phone + "|" + email + "|" + licenseNo + "|" + dateRegistered;
}

void Customer::display() {
    cout << "Customer ID: " << customerId << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "License No: " << licenseNo << endl;
    cout << "Date Registered: " << dateRegistered << endl;
}