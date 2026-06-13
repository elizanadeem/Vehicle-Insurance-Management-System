#include "Claim.h"

Claim::Claim() {
    claimId = "";
    customerId = "";
    vehicleId = "";
    claimDate = "";
    incidentDate = "";
    description = "";
    claimAmount = 0;
    status = "";
}

Claim::Claim(string claimId, string customerId, string vehicleId, string claimDate, string incidentDate, string description, double claimAmount, string status) {
    this->claimId = claimId;
    this->customerId = customerId;
    this->vehicleId = vehicleId;
    this->claimDate = claimDate;
    this->incidentDate = incidentDate;
    this->description = description;
    this->claimAmount = claimAmount;
    this->status = status;
}

string Claim::getClaimId() {
    return claimId;
}

string Claim::getCustomerId() {
    return customerId;
}

string Claim::getStatus() {
    return status;
}

void Claim::approve() {
    status = "Approved";
}

void Claim::reject() {
    status = "Rejected";
}

string Claim::toFileString() {
    return claimId + "|" + customerId + "|" + vehicleId + "|" + claimDate + "|" + incidentDate + "|" + description + "|" + to_string(claimAmount) + "|" + status;
}

void Claim::display() {
    cout << "Claim ID: " << claimId << endl;
    cout << "Customer ID: " << customerId << endl;
    cout << "Vehicle ID: " << vehicleId << endl;
    cout << "Claim Date: " << claimDate << endl;
    cout << "Incident Date: " << incidentDate << endl;
    cout << "Description: " << description << endl;
    cout << "Claim Amount: " << claimAmount << endl;
    cout << "Status: " << status << endl;
}