#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class to represent a Vehicle Service Record
class VehicleService {
private:
    int serviceID;
    string vehicleRegNo;
    string customerName;
    string serviceType;
    double totalBill;

public:
    // Function to input service details
    void getServiceDetails() {
        cout << "\nEnter Service ID: ";
        cin >> serviceID;
        cout << "Enter Vehicle Registration Number: ";
        cin >> vehicleRegNo;
        cout << "Enter Customer Name: ";
        cin.ignore(); // Clear buffer before getline
        getline(cin, customerName);
        cout << "Enter Service Type (e.g., Periodic, Repair): ";
        getline(cin, serviceType);
        cout << "Enter Total Bill Amount: ";
        cin >> totalBill;
    }

    // Function to display service details
    void displayServiceDetails() const {
        cout << "\n----------------------------------------";
        cout << "\nService ID      : " << serviceID;
        cout << "\nVehicle Reg No  : " << vehicleRegNo;
        cout << "\nCustomer Name   : " << customerName;
        cout << "\nService Type    : " << serviceType;
        cout << "\nTotal Bill      : Rs. " << totalBill;
        cout << "\n----------------------------------------\n";
    }

    int getServiceID() const {
        return serviceID;
    }
};

int main() {
    vector<VehicleService> services;
    int choice;

    do {
        cout << "\n=== VEHICLE SERVICE MANAGEMENT SYSTEM ===";
        cout << "\n1. Add New Service Record";
        cout << "\n2. Display All Service Records";
        cout << "\n3. Search Service Record by ID";
        cout << "\n4. Exit";
        cout << "\nEnter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                VehicleService vs;
                vs.getServiceDetails();
                services.push_back(vs);
                cout << "\nService record added successfully!\n";
                break;
            }
            case 2: {
                if (services.empty()) {
                    cout << "\nNo service records found!\n";
                } else {
                    cout << "\n--- All Service Records ---\n";
                    for (size_t i = 0; i < services.size(); ++i) {
                        services[i].displayServiceDetails();
                    }
                }
                break;
            }
            case 3: {
                int searchID;
                bool found = false;
                cout << "\nEnter Service ID to search: ";
                cin >> searchID;
                for (size_t i = 0; i < services.size(); ++i) {
                    if (services[i].getServiceID() == searchID) {
                        cout << "\nRecord Found!";
                        services[i].displayServiceDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nRecord with Service ID " << searchID << " not found!\n";
                }
                break;
            }
            case 4:
                cout << "\nExiting program. Thank you!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}