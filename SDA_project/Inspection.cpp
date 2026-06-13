#include "Inspection.h"

Inspection::Inspection() {
    inspectionId = "";
    claimId = "";
    surveyorId = "";
    inspectionDate = "";
    damageDescription = "";
    estimatedCost = 0;
    findings = "";
    isApproved = false;
}

Inspection::Inspection(string inspectionId, string claimId, string surveyorId, string inspectionDate, string damageDescription, double estimatedCost, string findings, bool isApproved) {
    this->inspectionId = inspectionId;
    this->claimId = claimId;
    this->surveyorId = surveyorId;
    this->inspectionDate = inspectionDate;
    this->damageDescription = damageDescription;
    this->estimatedCost = estimatedCost;
    this->findings = findings;
    this->isApproved = isApproved;
}

string Inspection::getClaimId() {
    return claimId;
}

string Inspection::generateReport() {
    return "Inspection ID: " + inspectionId + "\nClaim ID: " + claimId + "\nDamage: " + damageDescription + "\nFindings: " + findings;
}

string Inspection::toFileString() {
    return inspectionId + "|" + claimId + "|" + surveyorId + "|" + inspectionDate + "|" + damageDescription + "|" + to_string(estimatedCost) + "|" + findings + "|" + to_string(isApproved);
}

void Inspection::display() {
    cout << "Inspection ID: " << inspectionId << endl;
    cout << "Claim ID: " << claimId << endl;
    cout << "Surveyor ID: " << surveyorId << endl;
    cout << "Inspection Date: " << inspectionDate << endl;
    cout << "Damage Description: " << damageDescription << endl;
    cout << "Estimated Cost: " << estimatedCost << endl;
    cout << "Findings: " << findings << endl;
    cout << "Approved: " << (isApproved ? "Yes" : "No") << endl;
}