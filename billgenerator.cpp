#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class NegativePriceException : public runtime_error {
public:
    NegativePriceException(const string& message) : runtime_error(message) {}
};

class Servicing {
protected:
    string customerName;
    string vehicleNo;
    string mobileNo;
    double totalBill;

public:
    Servicing(const string& customerName, const string& vehicleNo, const string& mobileNo)
        : customerName(customerName), vehicleNo(vehicleNo), mobileNo(mobileNo), totalBill(0.0) {}

    virtual void calculateTotalBill() = 0;

    void displayBill() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Vehicle No: " << vehicleNo << endl;
        cout << "Mobile No: " << mobileNo << endl;
        cout << "Total Bill: " << totalBill << endl;
    }
};

class Maintenance : public Servicing {
private:
    string partName;
    double partPrice;
    double labourCharge;

public:
    Maintenance(const string& customerName, const string& vehicleNo, const string& mobileNo,
                const string& partName, double partPrice, double labourCharge)
        : Servicing(customerName, vehicleNo, mobileNo), partName(partName), partPrice(partPrice), labourCharge(labourCharge) {
        if (partPrice < 0 || labourCharge < 0) {
            throw NegativePriceException("Price cannot be negative.");
        }
    }

    void calculateTotalBill() override {
        double partGST = partPrice * 0.05;
        double labourGST = labourCharge * 0.05;
        totalBill = partPrice + partGST + labourCharge + labourGST;
    }
};

class OilChange : public Servicing {
private:
    string oilName;
    double oilPrice;

public:
    OilChange(const string& customerName, const string& vehicleNo, const string& mobileNo,
              const string& oilName, double oilPrice)
        : Servicing(customerName, vehicleNo, mobileNo), oilName(oilName), oilPrice(oilPrice) {
        if (oilPrice < 0) {
            throw NegativePriceException("Price cannot be negative.");
        }
    }

    void calculateTotalBill() override {
        double oilGST = oilPrice * 0.12;
        totalBill = oilPrice + oilGST;
    }
};

int main() {
    try {
        string customerName, vehicleNo, mobileNo, partName, oilName;
        double partPrice, labourCharge, oilPrice;
        int choice;

        cout << "Enter customer name: ";
        cin >> customerName;
        cout << "Enter vehicle number: ";
        cin >> vehicleNo;
        cout << "Enter mobile number: ";
        cin >> mobileNo;

        cout << "Enter 1 for Maintenance/Repairing, 2 for Engine/Gear Oil Change: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter part name: ";
            cin >> partName;
            cout << "Enter part price: ";
            cin >> partPrice;
            cout << "Enter labour charge: ";
            cin >> labourCharge;

            Maintenance maintenance(customerName, vehicleNo, mobileNo, partName, partPrice, labourCharge);
            maintenance.calculateTotalBill();
            maintenance.displayBill();
        } else if (choice == 2) {
            cout << "Enter oil brand name: ";
            cin >> oilName;
            cout << "Enter oil price: ";
            cin >> oilPrice;

            OilChange oilChange(customerName, vehicleNo, mobileNo, oilName, oilPrice);
            oilChange.calculateTotalBill();
            oilChange.displayBill();
        } else {
            cout << "Invalid choice." << endl;
        }
    } catch (const NegativePriceException& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}