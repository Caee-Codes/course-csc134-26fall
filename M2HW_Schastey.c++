/*
CSC 134
M2HW1 - Gold
Caeley Schastey
10/01/26
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n=========================================\n";
        cout << "        CSC134 M2HW1 - MAIN MENU         \n";
        cout << "=========================================\n";
        cout << "1. Question 1: Banking Transactions[cite: 1]\n";
        cout << "2. Question 2: General Crates Storage[cite: 2]\n";
        cout << "3. Question 3: Pizza Party Leftovers[cite: 2, 3]\n";
        cout << "4. Question 4: Cheering Program[cite: 3]\n";
        cout << "5. Exit\n";
        cout << "=========================================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Clear the input buffer to prevent issues with getline later
        cin.ignore();

        switch (choice) {
            case 1: {
                // Question 1: Banking Transactions
                string name;
                double startingBalance, deposit, withdrawal, finalBalance;
                int accountNumber = 982341; // Sample generated account number[cite: 1]

                cout << "\n--- Question 1: Banking Transactions ---\n";
                cout << "Enter your name: ";
                getline(cin, name);

                cout << "Enter starting account balance: $";
                cin >> startingBalance;

                cout << "Enter amount of deposit: $";
                cin >> deposit;

                cout << "Enter amount of withdrawal: $";
                cin >> withdrawal;

                finalBalance = startingBalance + deposit - withdrawal;

                // Format money amounts to two decimal places[cite: 1]
                cout << fixed << setprecision(2);
                cout << "\n[Account Summary]\n";
                cout << "Name on the account: " << name << endl;
                cout << "Account number: " << accountNumber << endl;
                cout << "Final account balance: $" << finalBalance << endl;
                break;
            }
            case 2: {
                // Question 2: General Crates Storage
                double costPerCubicFoot = 0.30; //[cite: 2]
                double maxAllowedCharge = 0.52; //[cite: 2]
                double volume, totalCost;

                cout << "\n--- Question 2: General Crates ---\n";
                cout << "Enter the volume of the crate in cubic feet: ";
                cin >> volume;

                totalCost = volume * costPerCubicFoot;

                // Format money amounts to two decimal places[cite: 2]
                cout << fixed << setprecision(2);
                cout << "\n[Storage Cost Summary]\n";
                cout << "Updated cost per cubic foot: $" << costPerCubicFoot << endl;
                cout << "Maximum allowed charge: $" << maxAllowedCharge << endl;
                cout << "Total storage cost: $" << totalCost << endl;
                break;
            }
            case 3: {
                // Question 3: Pizza Party
                int pizzasOrdered, slicesPerPizza, visitors;
                int slicesPerVisitor = 3; //[cite: 3]
                int totalSlices, slicesNeeded, slicesLeftOver;

                cout << "\n--- Question 3: Pizza Party ---\n";
                cout << "Enter how many pizzas you ordered: ";
                cin >> pizzasOrdered;

                cout << "Enter how many slices per pizza: ";
                cin >> slicesPerPizza;

                cout << "Enter how many visitors are coming: ";
                cin >> visitors;

                totalSlices = pizzasOrdered * slicesPerPizza;
                slicesNeeded = visitors * slicesPerVisitor;
                slicesLeftOver = totalSlices - slicesNeeded;

                cout << "\n[Pizza Party Summary]\n";
                cout << "Total slices available: " << totalSlices << endl;
                cout << "Pieces of pizza left over: " << slicesLeftOver << endl;
                break;
            }
            case 4: {
                // Question 4: Cheering Program (with bonus constraints)[cite: 3]
                string letsGo = "Let's go ";
                string school = "FTCC";
                string team = "Trojans";

                // Using string concatenation via the + operator[cite: 3]
                string cheerOne = letsGo + school;
                string cheerTwo = letsGo + team;

                cout << "\n--- Question 4: Cheering Program ---\n";
                cout << cheerOne << endl;
                cout << cheerOne << endl;
                cout << cheerOne << endl;
                cout << cheerTwo << endl;
                break;
            }
            case 5:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice. Please enter a number between 1 and 5.\n";
        }

        if (choice != 5) {
            cout << "\nPress Enter to return to the menu...";
            cin.get(); // Pause before looping back to the menu
        }

    } while (choice != 5);

    return 0;
}