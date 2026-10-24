// CSC 134
// M3LAB1 - Times Table
// Caeley
// Gold Tier Attempt
// 10/24/26

#include <iostream>

using namespace std;

int main() {
    int num = 0;

    // Ask user for a number
    cout << "Enter a number from 1 to 12: ";
    cin >> num;

    // Input Validation Loop (Gold Tier Requirement)
    // Keeps asking until the user enters a number between 1 and 12
    while (num < 1 || num > 12) {
        cout << "Invalid entry. Please enter a number from 1 to 12: ";
        cin >> num;
    }

    cout << endl;

    // Loop to print the multiplication table (from 1 to 12)
    int i = 1;
    while (i <= 12) {
        cout << num << " times " << i << " is " << (num * i) << "." << endl;
        i++;
    }

    return 0;
}