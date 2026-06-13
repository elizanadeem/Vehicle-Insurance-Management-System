#include "RepairOrder.h"

RepairOrder::RepairOrder() {
    orderId = "";
    claimId = "";
    workshopId = "";
    orderDate = "";
    completionDate = "";
    repairCost = 0;
    status = "";
}

RepairOrder::RepairOrder(string orderId, string claimId, string workshopId, string orderDate, string completionDate, double repairCost, string status) {
    this->orderId = orderId;
    this->claimId = claimId;
    this->workshopId = workshopId;
    this->orderDate = orderDate;
    this->completionDate = completionDate;
    this->repairCost = repairCost;
    this->status = status;
}

void RepairOrder::complete() {
    status = "Completed";
}

string RepairOrder::toFileString() {
    return orderId + "|" + claimId + "|" + workshopId + "|" + orderDate + "|" + completionDate + "|" + to_string(repairCost) + "|" + status;
}

void RepairOrder::display() {
    cout << "Order ID: " << orderId << endl;
    cout << "Claim ID: " << claimId << endl;
    cout << "Workshop ID: " << workshopId << endl;
    cout << "Order Date: " << orderDate << endl;
    cout << "Completion Date: " << completionDate << endl;
    cout << "Repair Cost: " << repairCost << endl;
    cout << "Status: " << status << endl;
}