#pragma once
#ifndef INSPECTION_H
#define INSPECTION_H

#include <iostream>
#include <string>
using namespace std;

class Inspection {
private:
    string inspectionId;
    string claimId;
    string surveyorId;
    string inspectionDate;
    string damageDescription;
    double estimatedCost;
    string findings;
    bool isApproved;

public:
    Inspection();
    Inspection(string inspectionId, string claimId, string surveyorId, string inspectionDate, string damageDescription, double estimatedCost, string findings, bool isApproved);

    string getClaimId();
    string generateReport();

    string toFileString();
    void display();
};

#endif