// CSC 134
// M3LAB2 - Number Grade to Letter Grade
// norrisa
// 10/12/2026
// Converts numerical grades to letter grades based on user input[cite: 15]

#include <iostream>

using namespace std;

int main() {
    int score;

    // Ask user for numerical grade[cite: 15]
    cout << "Enter your numerical grade: ";
    cin >> score;

    // Determine letter grade using if-else statements and range logic[cite: 15]
    if (score >= 90 && score <= 100) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (score >= 80 && score <= 89) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (score >= 70 && score <= 79) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (score >= 60 && score <= 69) {
        cout << "Your letter grade is: D" << endl;
    }
    else if (score >= 0 && score <= 59) {
        cout << "Your letter grade is: F" << endl;
    }
    else {
        cout << "Invalid grade entered. Please enter a score between 0 and 100." << endl;
    }

    return 0;
}