#pragma once
#ifndef CLAIM_H
#define CLAIM_H

#include <iostream>
#include <string>
using namespace std;

class Claim {
private:
    string claimId;
    string customerId;
    string vehicleId;
    string claimDate;
    string incidentDate;
    string description;
    double claimAmount;
    string status;

public:
    Claim();
    Claim(string claimId, string customerId, string vehicleId, string claimDate, string incidentDate, string description, double claimAmount, string status);

    string getClaimId();
    string getCustomerId();
    string getStatus();

    void approve();
    void reject();

    string toFileString();
    void display();
};

#endif