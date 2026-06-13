#pragma once
#ifndef INSURANCEPOLICY_H
#define INSURANCEPOLICY_H

#include <iostream>
#include <string>
using namespace std;

class InsurancePolicy {
private:
    string policyId;
    string customerId;
    string vehicleId;
    string startDate;
    string endDate;
    double premiumAmount;
    string coverageType;
    string status;

public:
    InsurancePolicy();
    InsurancePolicy(string policyId, string customerId, string vehicleId, string startDate, string endDate, double premiumAmount, string coverageType, string status);

    string getPolicyId();
    string getCustomerId();
    string getVehicleId();
    string getStatus();

    void renewPolicy(string newEndDate);
    string toFileString();
    void display();
};

#endif