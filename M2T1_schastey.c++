   // CSC 134
    // M1LAB
    // Caeley
    // 9/19/26

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // set up all variables
    string name = "caeley";
    string product = "Chocolate"; 
    string first_name, last_name, full_name;
    int amount_Purchased = 15;
    double cost_each = 0.991;
    double total_cost = 0.0;

    //greet the customer
    cout << "Welcome to " << name;
    cout << "'s Chocolate Shop" << endl;
    cout << "whats your first name? ";
    cin >> first_name;
    cout << "whats your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you " << full_name << endl;


    //ask how many chocolates the user wants to buy
    cout << "How many chocolates would you like to buy? ";
    cin >> amount_Purchased;

    //calculate total cost
    total_cost = amount_Purchased * cost_each;

    // set output to 2 decimals - requires <iomanip>
    cout << setprecision(2) << fixed; 

    //give the results
    cout << "For " << amount_Purchased << " " << product << endl;
    cout << " That will be $" << total_cost << endl;
    cout << "Thank you for shopping at " << name << "'s Chocolate Shop" << endl;

   

    return 0;
}
