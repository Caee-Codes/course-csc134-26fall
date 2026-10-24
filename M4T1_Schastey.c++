// CSC 134
// M4T1 - While Loops
// Caeley
// 10/23/26

#include <iostream>

using namespace std;

int main() {
    // ==========================================
    // PART 1: Program 5-3 (Say Hello 5 times)
    // ==========================================
    cout << "--- Part 1: Simple While Loop ---" << endl;
    
    int count = 1;
    while (count <= 5) {
        cout << "Hello number " << count << endl;
        count++; // Don't forget to increment so the loop stops!
    }
    
    cout << "That's all!\n" << endl;

    // ==========================================
    // PART 2: Program 5-6 (Numbers and Squares Table)
    // ==========================================
    cout << "--- Part 2: Number and Squares Table ---" << endl;
    
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;
    
    int num = MIN_NUMBER;
    
    cout << "Number\t\tNumber Squared" << endl;
    cout << "------------------------------" << endl;
    
    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Increment the counter
    }

    return 0;
}