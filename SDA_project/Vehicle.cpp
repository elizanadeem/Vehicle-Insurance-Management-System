#include "Vehicle.h"

Vehicle::Vehicle() {
    vehicleId = "";
    customerId = "";
    regNo = "";
    make = "";
    model = "";
    year = 0;
}

Vehicle::Vehicle(string vehicleId, string customerId, string regNo, string make, string model, int year) {
    this->vehicleId = vehicleId;
    this->customerId = customerId;
    this->regNo = regNo;
    this->make = make;
    this->model = model;
    this->year = year;
}

string Vehicle::getVehicleId() {
    return vehicleId;
}

string Vehicle::getCustomerId() {
    return customerId;
}

string Vehicle::toFileString() {
    return vehicleId + "|" + customerId + "|" + regNo + "|" + make + "|" + model + "|" + to_string(year);
}

void Vehicle::display() {
    cout << "Vehicle ID: " << vehicleId << endl;
    cout << "Customer ID: " << customerId << endl;
    cout << "Registration No: " << regNo << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}