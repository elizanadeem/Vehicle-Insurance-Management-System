#include <iostream>
#include "InsuranceSystem.h"

using namespace std;

void customerMenu(InsuranceSystem& system) {
    int choice;

    do {
        cout << "\n========== CUSTOMER MANAGEMENT ==========\n";
        cout << "1. Register Customer\n";
        cout << "2. View Customers\n";
        cout << "3. View Previous Claims Of Customer\n";
        cout << "0. Back To Main Menu\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            system.registerCustomer();
            break;
        case 2:
            system.viewCustomers();
            break;
        case 3:
            system.viewPreviousClaims();
            break;
        case 0:
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);
}

void vehicleMenu(InsuranceSystem& system) {
    int choice;

    do {
        cout << "\n========== VEHICLE MANAGEMENT ==========\n";
        cout << "1. Register Vehicle\n";
        cout << "2. View Vehicles\n";
        cout << "0. Back To Main Menu\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            system.registerVehicle();
            break;
        case 2:
            system.viewVehicles();
            break;
        case 0:
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);
}

void policyMenu(InsuranceSystem& system) {
    int choice;

    do {
        cout << "\n========== POLICY MANAGEMENT ==========\n";
        cout << "1. Create Insurance Policy\n";
        cout << "2. View Policies\n";
        cout << "0. Back To Main Menu\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            system.createPolicy();
            break;
        case 2:
            system.viewPolicies();
            break;
        case 0:
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);
}

void claimMenu(InsuranceSystem& system) {
    int choice;

    do {
        cout << "\n========== CLAIM MANAGEMENT ==========\n";
        cout << "1. Submit Claim\n";
        cout << "2. View Claims\n";
        cout << "3. Approve Claim\n";
        cout << "4. Reject Claim\n";
        cout << "5. View Previous Claims Of Customer\n";
        cout << "0. Back To Main Menu\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            system.submitClaim();
            break;
        case 2:
            system.viewClaims();
            break;
        case 3:
            system.approveClaim();
            break;
        case 4:
            system.rejectClaim();
            break;
        case 5:
            system.viewPreviousClaims();
            break;
        case 0:
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);
}

void inspectionMenu(InsuranceSystem& system) {
    int choice;

    do {
        cout << "\n========== INSPECTION MANAGEMENT ==========\n";
        cout << "1. Submit Inspection Report\n";
        cout << "2. View Inspections\n";
        cout << "0. Back To Main Menu\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            system.submitInspection();
            break;
        case 2:
            system.viewInspections();
            break;
        case 0:
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);
}

void workshopMenu(InsuranceSystem& system) {
    int choice;

    do {
        cout << "\n========== WORKSHOP AND REPAIR MANAGEMENT ==========\n";
        cout << "1. Register Workshop\n";
        cout << "2. View Workshops\n";
        cout << "3. Assign Registered Workshop For Repair\n";
        cout << "4. View Repair Orders\n";
        cout << "0. Back To Main Menu\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            system.registerWorkshop();
            break;
        case 2:
            system.viewWorkshops();
            break;
        case 3:
            system.assignWorkshopRepair();
            break;
        case 4:
            system.viewRepairOrders();
            break;
        case 0:
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);
}

void reportMenu(InsuranceSystem& system) {
    int choice;

    do {
        cout << "\n========== REPORTS ==========\n";
        cout << "1. Generate Pending Claim Report\n";
        cout << "2. Generate New Customer Report\n";
        cout << "3. Generate Inspection Report\n";
        cout << "0. Back To Main Menu\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            system.generatePendingClaimReport();
            break;
        case 2:
            system.generateNewCustomerReport();
            break;
        case 3:
            system.generateInspectionReport();
            break;
        case 0:
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);
}

int main() {
    InsuranceSystem system;
    int choice;

    do {
        cout << "\n=====================================\n";
        cout << "   AUTOMOBILE INSURANCE SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Customer Management\n";
        cout << "2. Vehicle Management\n";
        cout << "3. Policy Management\n";
        cout << "4. Claim Management\n";
        cout << "5. Inspection Management\n";
        cout << "6. Workshop And Repair Management\n";
        cout << "7. Reports\n";
        cout << "0. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            customerMenu(system);
            break;
        case 2:
            vehicleMenu(system);
            break;
        case 3:
            policyMenu(system);
            break;
        case 4:
            claimMenu(system);
            break;
        case 5:
            inspectionMenu(system);
            break;
        case 6:
            workshopMenu(system);
            break;
        case 7:
            reportMenu(system);
            break;
        case 0:
            cout << "Thank You For Using The System.\n";
            break;
        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);

    return 0;
}