#include "InsuranceSystem.h"
#include <sstream>

vector<string> splitLine(string line, char delimiter) {
    vector<string> parts;
    string item;
    stringstream ss(line);

    while (getline(ss, item, delimiter)) {
        parts.push_back(item);
    }

    return parts;
}

void InsuranceSystem::registerCustomer() {
    string id, name, address, phone, email, license, date;

    cout << "Customer ID: ";
    getline(cin, id);
    cout << "Name: ";
    getline(cin, name);
    cout << "Address: ";
    getline(cin, address);
    cout << "Phone: ";
    getline(cin, phone);
    cout << "Email: ";
    getline(cin, email);
    cout << "License No: ";
    getline(cin, license);
    cout << "Date Registered: ";
    getline(cin, date);

    Customer c(id, name, address, phone, email, license, date);
    FileManager::writeRecord("customers.txt", c.toFileString());

    cout << "Customer Registered Successfully.\n";
}

void InsuranceSystem::registerVehicle() {
    string vid, cid, reg, make, model;
    int year;

    cout << "Vehicle ID: ";
    getline(cin, vid);
    cout << "Customer ID: ";
    getline(cin, cid);
    cout << "Registration No: ";
    getline(cin, reg);
    cout << "Make: ";
    getline(cin, make);
    cout << "Model: ";
    getline(cin, model);
    cout << "Year: ";
    cin >> year;
    cin.ignore();

    Vehicle v(vid, cid, reg, make, model, year);
    FileManager::writeRecord("vehicles.txt", v.toFileString());

    cout << "Vehicle Registered Successfully.\n";
}

void InsuranceSystem::createPolicy() {
    string pid, cid, vid, start, end, coverage;
    double premium;

    cout << "Policy ID: ";
    getline(cin, pid);
    cout << "Customer ID: ";
    getline(cin, cid);
    cout << "Vehicle ID: ";
    getline(cin, vid);
    cout << "Start Date: ";
    getline(cin, start);
    cout << "End Date: ";
    getline(cin, end);
    cout << "Premium Amount: ";
    cin >> premium;
    cin.ignore();
    cout << "Coverage Type: ";
    getline(cin, coverage);

    InsurancePolicy p(pid, cid, vid, start, end, premium, coverage, "Active");
    FileManager::writeRecord("policies.txt", p.toFileString());

    cout << "Policy Created Successfully.\n";
}

void InsuranceSystem::submitClaim() {
    string claimId, cid, vid, claimDate, incidentDate, desc;
    double amount;

    cout << "Claim ID: ";
    getline(cin, claimId);
    cout << "Customer ID: ";
    getline(cin, cid);
    cout << "Vehicle ID: ";
    getline(cin, vid);
    cout << "Claim Date: ";
    getline(cin, claimDate);
    cout << "Incident Date: ";
    getline(cin, incidentDate);
    cout << "Description: ";
    getline(cin, desc);
    cout << "Claim Amount: ";
    cin >> amount;
    cin.ignore();

    Claim c(claimId, cid, vid, claimDate, incidentDate, desc, amount, "Pending");
    FileManager::writeRecord("claims.txt", c.toFileString());

    cout << "Claim Submitted Successfully.\n";
}

void InsuranceSystem::submitInspection() {
    string inspectionId, claimId, surveyorId, date, damage, findings;
    double cost;

    cout << "Inspection ID: ";
    getline(cin, inspectionId);
    cout << "Claim ID: ";
    getline(cin, claimId);
    cout << "Surveyor ID: ";
    getline(cin, surveyorId);
    cout << "Inspection Date: ";
    getline(cin, date);
    cout << "Damage Description: ";
    getline(cin, damage);
    cout << "Estimated Cost: ";
    cin >> cost;
    cin.ignore();
    cout << "Findings: ";
    getline(cin, findings);

    Inspection i(inspectionId, claimId, surveyorId, date, damage, cost, findings, true);
    FileManager::writeRecord("inspections.txt", i.toFileString());

    cout << "Inspection Report Submitted Successfully.\n";
}

void InsuranceSystem::registerWorkshop() {
    string id, name, address, contact;

    cout << "Workshop ID: ";
    getline(cin, id);
    cout << "Workshop Name: ";
    getline(cin, name);
    cout << "Address: ";
    getline(cin, address);
    cout << "Contact No: ";
    getline(cin, contact);

    Workshop w(id, name, address, contact, true);
    FileManager::writeRecord("workshops.txt", w.toFileString());

    cout << "Workshop Registered Successfully.\n";
}

void InsuranceSystem::approveClaim() {
    string id;
    cout << "Enter Claim ID To Approve: ";
    getline(cin, id);

    vector<string> records = FileManager::readRecords("claims.txt");
    bool found = false;

    for (int i = 0; i < records.size(); i++) {
        vector<string> parts = splitLine(records[i], '|');

        if (parts.size() >= 8 && parts[0] == id) {
            parts[7] = "Approved";
            records[i] = parts[0] + "|" + parts[1] + "|" + parts[2] + "|" + parts[3] + "|" +
                parts[4] + "|" + parts[5] + "|" + parts[6] + "|" + parts[7];
            found = true;
        }
    }

    FileManager::writeAll("claims.txt", records);

    if (found)
        cout << "Claim Approved Successfully.\n";
    else
        cout << "Claim Not Found.\n";
}

void InsuranceSystem::rejectClaim() {
    string id;
    cout << "Enter Claim ID To Reject: ";
    getline(cin, id);

    vector<string> records = FileManager::readRecords("claims.txt");
    bool found = false;

    for (int i = 0; i < records.size(); i++) {
        vector<string> parts = splitLine(records[i], '|');

        if (parts.size() >= 8 && parts[0] == id) {
            parts[7] = "Rejected";
            records[i] = parts[0] + "|" + parts[1] + "|" + parts[2] + "|" + parts[3] + "|" +
                parts[4] + "|" + parts[5] + "|" + parts[6] + "|" + parts[7];
            found = true;
        }
    }

    FileManager::writeAll("claims.txt", records);

    if (found)
        cout << "Claim Rejected Successfully.\n";
    else
        cout << "Claim Not Found.\n";
}

void InsuranceSystem::assignWorkshopRepair() {
    string orderId, claimId, workshopId, orderDate, completionDate;
    double cost;

    cout << "Order ID: ";
    getline(cin, orderId);
    cout << "Claim ID: ";
    getline(cin, claimId);
    cout << "Workshop ID: ";
    getline(cin, workshopId);

    vector<string> workshops = FileManager::readRecords("workshops.txt");
    bool registered = false;

    for (int i = 0; i < workshops.size(); i++) {
        vector<string> parts = splitLine(workshops[i], '|');

        if (parts.size() >= 5 && parts[0] == workshopId && parts[4] == "1") {
            registered = true;
        }
    }

    if (!registered) {
        cout << "Repair cannot be assigned. Workshop is not registered.\n";
        return;
    }

    cout << "Order Date: ";
    getline(cin, orderDate);
    cout << "Completion Date: ";
    getline(cin, completionDate);
    cout << "Repair Cost: ";
    cin >> cost;
    cin.ignore();

    RepairOrder r(orderId, claimId, workshopId, orderDate, completionDate, cost, "Assigned");
    FileManager::writeRecord("repairs.txt", r.toFileString());

    cout << "Repair Order Assigned Successfully.\n";
}

void InsuranceSystem::viewCustomers() {
    cout << "\n--- Customers ---\n";
    FileManager::readAll("customers.txt");
}

void InsuranceSystem::viewVehicles() {
    cout << "\n--- Vehicles ---\n";
    FileManager::readAll("vehicles.txt");
}

void InsuranceSystem::viewPolicies() {
    cout << "\n--- Policies ---\n";
    FileManager::readAll("policies.txt");
}

void InsuranceSystem::viewClaims() {
    cout << "\n--- Claims ---\n";
    FileManager::readAll("claims.txt");
}

void InsuranceSystem::viewInspections() {
    cout << "\n--- Inspections ---\n";
    FileManager::readAll("inspections.txt");
}

void InsuranceSystem::viewWorkshops() {
    cout << "\n--- Registered Workshops ---\n";
    FileManager::readAll("workshops.txt");
}

void InsuranceSystem::viewRepairOrders() {
    cout << "\n--- Repair Orders ---\n";
    FileManager::readAll("repairs.txt");
}

void InsuranceSystem::generatePendingClaimReport() {
    vector<string> records = FileManager::readRecords("claims.txt");

    cout << "\n--- Pending Claim Report ---\n";

    for (int i = 0; i < records.size(); i++) {
        vector<string> parts = splitLine(records[i], '|');

        if (parts.size() >= 8 && parts[7] == "Pending") {
            cout << records[i] << endl;
        }
    }
}

void InsuranceSystem::generateNewCustomerReport() {
    string month;
    cout << "Enter Month Or Date Text To Search: ";
    getline(cin, month);

    vector<string> records = FileManager::readRecords("customers.txt");

    cout << "\n--- New Customer Report ---\n";

    for (int i = 0; i < records.size(); i++) {
        vector<string> parts = splitLine(records[i], '|');

        if (parts.size() >= 7 && parts[6].find(month) != string::npos) {
            cout << records[i] << endl;
        }
    }
}

void InsuranceSystem::generateInspectionReport() {
    cout << "\n--- Inspection Report ---\n";
    FileManager::readAll("inspections.txt");
}

void InsuranceSystem::viewPreviousClaims() {
    string customerId;
    cout << "Enter Customer ID: ";
    getline(cin, customerId);

    vector<string> records = FileManager::readRecords("claims.txt");

    cout << "\n--- Previous Claims ---\n";

    for (int i = 0; i < records.size(); i++) {
        vector<string> parts = splitLine(records[i], '|');

        if (parts.size() >= 8 && parts[1] == customerId) {
            cout << records[i] << endl;
        }
    }
}