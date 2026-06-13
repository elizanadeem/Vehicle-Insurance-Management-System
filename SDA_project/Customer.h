#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer : public Person {
private:
    string customerId;
    string email;
    string licenseNo;
    string dateRegistered;

public:
    Customer();
    Customer(string customerId, string name, string address, string phone, string email, string licenseNo, string dateRegistered);

    string getCustomerId();
    string getEmail();
    string getLicenseNo();
    string getDateRegistered();

    string toFileString();
    void display();
};

#endif