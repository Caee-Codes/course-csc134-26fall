// CSC 134
// M5T1 - Basic Functions
// Caeley
// 10/23/26

#include <iostream>

using namespace std;

// Function Prototypes
void say_hello();
int give_double(int num);

int main() {
    cout << "M5T1: Basic Functions" << endl << endl;

    // Call the void function
    say_hello();

    // Call the value-returning function
    int my_num = 5;
    int result = give_double(my_num);

    cout << "The double of " << my_num << " is " << result << "." << endl;

    return 0;
}

// Void function: prints a message and returns nothing
void say_hello() {
    cout << "Hello from the void function!" << endl;
}

// Value-returning function: takes an integer parameter and returns its double
int give_double(int num) {
    return num * 2;
}