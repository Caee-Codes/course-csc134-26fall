// CSC 134
// M3LAB1 - Choice Game
// Caeley
// 10/12/2026


#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable for user choice
    string choice;

    cout << "You encounter a wild goblin in the forest!" << endl;
    cout << "Do you want to 'fight' or 'run'? ";
    cin >> choice;

    // Check user choice using if/else statements
    if (choice == "fight") {
        cout << "You bravely attack the goblin and win a shiny gold coin!" << endl;
    }
    else if (choice == "run") {
        cout << "You flee safely back to the village, but drop your sword." << endl;
    }
    else {
        cout << "That wasn't a valid choice. The goblin runs away confused." << endl;
    }

    return 0;
}