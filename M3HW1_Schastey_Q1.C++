// CSC 134
// Caeley Schastey
// Gold
// 10/18/26

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed random number generator for Question 4
    srand(time(0));

    // ==========================================
    // QUESTION 1: Simple Chatbot
    // ==========================================
    cout << "--- QUESTION 1 ---" << endl;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    
    string user_like;
    cin >> user_like;

    if (user_like == "yes" || user_like == "Yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    } else if (user_like == "no" || user_like == "No") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << "\n------------------------------------------\n" << endl;

    // ==========================================
    // QUESTION 2: Receipt Calculator
    // ==========================================
    cout << "--- QUESTION 2 ---" << endl;

    double meal_price = 0.0;
    int order_type = 0;
    const double TAX_RATE = 0.08; // 8% sales tax
    const double TIP_RATE = 0.15; // 15% tip for dine in

    cout << "Enter the price of the meal: $";
    cin >> meal_price;

    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> order_type;

    double tax_amount = meal_price * TAX_RATE;
    double tip_amount = 0.0;

    if (order_type == 1) {
        tip_amount = meal_price * TIP_RATE;
    }

    double total_due = meal_price + tax_amount + tip_amount;

    cout << fixed << setprecision(2);
    cout << "\n----- RECEIPT -----" << endl;
    cout << "Meal Price: $" << meal_price << endl;
    cout << "Tax (8%):   $" << tax_amount << endl;
    cout << "Tip:        $" << tip_amount << endl;
    cout << "-------------------" << endl;
    cout << "Total Due:  $" << total_due << endl;

    cout << "\n------------------------------------------\n" << endl;

    // ==========================================
    // QUESTION 3: Choose Your Own Adventure
    // ==========================================
    cout << "--- QUESTION 3 ---" << endl;
    cout << "You are standing at the entrance of a dark cave." << endl;
    cout << "Do you want to (1) Enter the cave or (2) Walk away? ";

    int choice1 = 0;
    cin >> choice1;

    if (choice1 == 1) {
        cout << "\nYou step into the dimly lit cavern. Up ahead, you see two tunnels." << endl;
        cout << "Do you take the (1) Left tunnel or (2) Right tunnel? ";
        
        int choice2 = 0;
        cin >> choice2;

        if (choice2 == 1) {
            cout << "\nYou follow the left tunnel and discover a chest full of treasure! You win!" << endl;
        } else if (choice2 == 2) {
            cout << "\nYou step on a hidden trap door and slide into a pit! Defeat." << endl;
        } else {
            cout << "\nInvalid choice. You tripped in the dark and had to retreat." << endl;
        }
    } else if (choice1 == 2) {
        cout << "\nYou decided it wasn't worth the risk and walked home safely. Game Over!" << endl;
    } else {
        cout << "\nInvalid input. You stood frozen outside until nightfall. Game Over!" << endl;
    }

    cout << "\n------------------------------------------\n" << endl;

    // ==========================================
    // QUESTION 4: Math Practice
    // ==========================================
    cout << "--- QUESTION 4 ---" << endl;

    int num1 = rand() % 10; // Random single-digit number (0-9)
    int num2 = rand() % 10; // Random single-digit number (0-9)
    int user_answer = 0;
    int correct_answer = num1 + num2;

    cout << "What is " << num1 << " plus " << num2 << "? ";
    cin >> user_answer;

    if (user_answer == correct_answer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer was " << correct_answer << "." << endl;
    }

    return 0;
}