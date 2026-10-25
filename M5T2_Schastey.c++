// CSC 134
// M5T2 - More Practice with Functions
// Caeley
// Partner: AI (Gemini)
// 10/24/26

#include <iostream>
using namespace std;

// Function prototypes[cite: 20]
int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    // Loops from 1 to 10[cite: 20]
    for (int i = 1; i <= 10; i++) {
        // Stores the value square() returns in a variable[cite: 20]
        int squared_val = square(i);
        // Passes that variable to printAnswerLine()[cite: 20]
        printAnswerLine(i, squared_val);
    }
    return 0;
}

// Returns the square of num; prints nothing[cite: 20]
int square(int num) {
    return num * num;
}

// Prints one line, e.g., 3 squared is 9[cite: 20]
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}