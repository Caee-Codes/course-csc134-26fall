/*
CSC 134
M2T2 - Recipt Calculator
caeley
9/25/26
*/

#include <iostream>
#include <iomanip> // for 2 decimal places trick 
using namespace std;

int main() {
    // Purpose - create a simple recipt
    //should also handle sales tax (8%)

    // Declare our variables
    string item = "☕ Coffee";
    double item_price = 2.50;
    double tax_percent = 0.08;  // 8% is 8/100
    double tax_amount;          // tax in $
    double total;               // price + tax

    // Greet user and take the order
    cout << "Welcome to the Coffee Shop!" << endl;
    cout << "you ordered one" << item << "." << endl;

    // Calculate the meal price
    // calculate the tax amount and total
    tax_amount = item_price * tax_percent; // take 8% of the item price
    total = item_price + tax_amount;



    // print the recipt
    cout << fixed << setprecision(2); // 2 decimal places
    cout << "Thank you for your order!" << endl;
    cout << "-------------------------" << endl;
    cout << item << "\t$" << item_price << endl;
    cout << "Tax" << "\t\t$"<< tax_amount << endl;
    cout << "-------------------------" << endl;
    cout << "Total" << "\t\t$" << total   << endl;
    cout << endl << "Have a great day!" << endl;
    return 0; // no errors
}