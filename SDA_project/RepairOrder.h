#ifndef REPAIRORDER_H
#define REPAIRORDER_H

#include <iostream>
#include <string>
using namespace std;

class RepairOrder {
private:
    string orderId;
    string claimId;
    string workshopId;
    string orderDate;
    string completionDate;
    double repairCost;
    string status;

public:
    RepairOrder();
    RepairOrder(string orderId, string claimId, string workshopId, string orderDate, string completionDate, double repairCost, string status);

    void complete();

    string toFileString();
    void display();
};

#endif#pragma once
