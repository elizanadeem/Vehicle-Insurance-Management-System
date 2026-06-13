#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string vehicleId;
    string customerId;
    string regNo;
    string make;
    string model;
    int year;

public:
    Vehicle();
    Vehicle(string vehicleId, string customerId, string regNo, string make, string model, int year);

    string getVehicleId();
    string getCustomerId();

    string toFileString();
    void display();
};

#endif#pragma once
