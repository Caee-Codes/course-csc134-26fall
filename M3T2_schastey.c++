// CSC 134
// M3LAB - Craps
// Caeley
// 10/12/2026
// Simulate the game of Craps (first pass / single roll logic)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Variables for dice and sum
    int die1, die2, sum;

    // Roll two dice (numbers between 1 and 6)
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    sum = die1 + die2;

    // Display the rolls
    cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;

    // Decision tree for the first roll
    if (sum == 2 || sum == 3 || sum == 12) {
        cout << "Craps! You lose." << endl;
    }
    else if (sum == 7 || sum == 11) {
        cout << "Natural! You win." << endl;
    }
    else if (sum == 4 || sum == 10) {
        cout << "Point is " << sum << ". Odds are 2/1." << endl;
    }
    else if (sum == 5 || sum == 9) {
        cout << "Point is " << sum << ". Odds are 3/2." << endl;
    }
    else if (sum == 6 || sum == 8) {
        cout << "Point is " << sum << ". Odds are 6/5." << endl;
    }
    else {
        cout << "Error routine." << endl;
    }

    return 0;
}