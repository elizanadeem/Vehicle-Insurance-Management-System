#pragma once
#ifndef WORKSHOP_H
#define WORKSHOP_H

#include <iostream>
#include <string>
using namespace std;

class Workshop {
private:
    string workshopId;
    string name;
    string address;
    string contactNo;
    bool isRegistered;

public:
    Workshop();
    Workshop(string workshopId, string name, string address, string contactNo, bool isRegistered);

    string getWorkshopId();
    bool getRegistered();

    string toFileString();
    void display();
};

#endif