#ifndef INSURANCESYSTEM_H
#define INSURANCESYSTEM_H

#include <iostream>
#include <string>
#include <vector>

#include "Customer.h"
#include "Vehicle.h"
#include "InsurancePolicy.h"
#include "Claim.h"
#include "Inspection.h"
#include "Workshop.h"
#include "RepairOrder.h"
#include "FileManager.h"

using namespace std;

class InsuranceSystem {
public:
    void registerCustomer();
    void registerVehicle();
    void createPolicy();
    void submitClaim();
    void submitInspection();
    void registerWorkshop();
    void approveClaim();
    void rejectClaim();
    void assignWorkshopRepair();

    void viewCustomers();
    void viewVehicles();
    void viewPolicies();
    void viewClaims();
    void viewInspections();
    void viewWorkshops();
    void viewRepairOrders();

    void generatePendingClaimReport();
    void generateNewCustomerReport();
    void generateInspectionReport();
    void viewPreviousClaims();
};

#endif#pragma once
