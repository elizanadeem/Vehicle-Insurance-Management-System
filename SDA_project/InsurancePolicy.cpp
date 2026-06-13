#include "InsurancePolicy.h"

InsurancePolicy::InsurancePolicy() {
    policyId = "";
    customerId = "";
    vehicleId = "";
    startDate = "";
    endDate = "";
    premiumAmount = 0;
    coverageType = "";
    status = "";
}

InsurancePolicy::InsurancePolicy(string policyId, string customerId, string vehicleId, string startDate, string endDate, double premiumAmount, string coverageType, string status) {
    this->policyId = policyId;
    this->customerId = customerId;
    this->vehicleId = vehicleId;
    this->startDate = startDate;
    this->endDate = endDate;
    this->premiumAmount = premiumAmount;
    this->coverageType = coverageType;
    this->status = status;
}

string InsurancePolicy::getPolicyId() {
    return policyId;
}

string InsurancePolicy::getCustomerId() {
    return customerId;
}

string InsurancePolicy::getVehicleId() {
    return vehicleId;
}

string InsurancePolicy::getStatus() {
    return status;
}

void InsurancePolicy::renewPolicy(string newEndDate) {
    endDate = newEndDate;
    status = "Active";
}

string InsurancePolicy::toFileString() {
    return policyId + "|" + customerId + "|" + vehicleId + "|" + startDate + "|" + endDate + "|" + to_string(premiumAmount) + "|" + coverageType + "|" + status;
}

void InsurancePolicy::display() {
    cout << "Policy ID: " << policyId << endl;
    cout << "Customer ID: " << customerId << endl;
    cout << "Vehicle ID: " << vehicleId << endl;
    cout << "Start Date: " << startDate << endl;
    cout << "End Date: " << endDate << endl;
    cout << "Premium Amount: " << premiumAmount << endl;
    cout << "Coverage Type: " << coverageType << endl;
    cout << "Status: " << status << endl;
}