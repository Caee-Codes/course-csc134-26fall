/**
 * Caeley
 * CSC 134
 * M3BONUS - Craps Game (Exploratory AI Assisted Development)
 * A Craps game featuring random die rolling, loops for replayability/input validation, 
 *              and decision structures.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
int rollDice();
void playCraps();

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    char playAgain = 'y';

    cout << "==========================================" << endl;
    cout << "        WELCOME TO THE CRAPS GAME!        " << endl;
    cout << "==========================================" << endl;

    // Loop to let the player replay the game
    while (playAgain == 'y' || playAgain == 'Y') {
        playCraps();

        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;

        // Input validation loop
        while (playAgain != 'y' && playAgain != 'Y' && playAgain != 'n' && playAgain != 'N') {
            cout << "Invalid choice. Please enter 'y' or 'n': ";
            cin >> playAgain;
        }
    }

    cout << "\nThanks for playing! Goodbye." << endl;
    return 0;
}

// Function to simulate rolling two 6-sided dice
int rollDice() {
    int die1 = (rand() % 6) + 1;
    int die2 = (rand() % 6) + 1;
    int sum = die1 + die2;

    cout << "You rolled: " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}

// Function containing the core Craps game rules
void playCraps() {
    cout << "\n--- New Round ---" << endl;
    cout << "Press ENTER to roll the dice...";
    cin.ignore();
    if (cin.peek() == '\n') cin.get();

    int total = rollDice();

    // First Roll (Come Out Roll)
    if (total == 7 || total == 11) {
        cout << "Natural! You WIN! 🎉" << endl;
    } 
    else if (total == 2 || total == 3 || total == 12) {
        cout << "Craps! You LOSE! ❌" << endl;
    } 
    else {
        // Point is set
        int point = total;
        cout << "Point is established as " << point << "." << endl;
        cout << "Roll " << point << " again to win before rolling a 7!" << endl;

        bool keepRolling = true;
        while (keepRolling) {
            cout << "\nPress ENTER to roll again...";
            cin.get();

            total = rollDice();

            if (total == point) {
                cout << "You hit your point (" << point << ")! You WIN! 🎉" << endl;
                keepRolling = false;
            } 
            else if (total == 7) {
                cout << "You rolled a 7! You LOSE! ❌" << endl;
                keepRolling = false;
            }
        }
    }
}