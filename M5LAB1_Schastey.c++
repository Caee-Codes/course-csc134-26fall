// CSC 134
// M5LAB1
// Caeley
// 10/24/26

#include <iostream>

using namespace std;

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

int main() {
    main_menu();
    return 0;
}

// Main menu with input validation loop
void main_menu() {
    int choice = 0;

    while (choice != 4) {
        cout << "========================================" << endl;
        cout << "   CHOOSE YOUR OWN ADVENTURE: MAIN MENU " << endl;
        cout << "========================================" << endl;
        cout << "You are standing outside a mystery mansion." << endl;
        cout << "1. Enter through the front door" << endl;
        cout << "2. Sneak around to the back door" << endl;
        cout << "3. Decided it's creepy and go home" << endl;
        cout << "4. Quit program" << endl;
        cout << "Choose option 1, 2, 3, or 4: ";
        cin >> choice;

        if (choice == 1) {
            choice_front_door();
        } else if (choice == 2) {
            choice_back_door();
        } else if (choice == 3) {
            choice_go_home();
        } else if (choice == 4) {
            cout << "\nThanks for playing! Goodbye." << endl;
        } else {
            cout << "\n[Invalid input! Please choose 1, 2, 3, or 4.]\n" << endl;
        }
    }
}

// Story Branch 1: Front Door
void choice_front_door() {
    cout << "\n--- FRONT DOOR ---" << endl;
    cout << "You push open the heavy oak front door. It creaks loudly!" << endl;
    cout << "Inside, a grandfather clock chiming fills the silent foyer." << endl;
    cout << "You find a key on the table and pocket it before returning outside.\n" << endl;
}

// Story Branch 2: Back Door
void choice_back_door() {
    cout << "\n--- BACK DOOR ---" << endl;
    cout << "You sneak around the overgrown garden to the rear entrance." << endl;
    cout << "The back door is unlocked! You slip into a dusty kitchen and find a warm pie." << endl;
    cout << "Satisfied, you head back out to the yard.\n" << endl;
}

// Story Branch 3: Go Home
void choice_go_home() {
    cout << "\n--- GO HOME ---" << endl;
    cout << "You decide the mansion is far too ominous." << endl;
    cout << "You walk back down the driveway, get into your car, and drive safely home." << endl;
    cout << "Better safe than sorry!\n" << endl;
}