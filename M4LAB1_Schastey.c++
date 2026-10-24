#include <iostream>

using namespace std;

int main() {
    int height = 0;
    int width = 0;

    cout << "Enter height: ";
    cin >> height;

    cout << "Enter width: ";
    cin >> width;

    // Outer loop handles the number of lines (height)
    for (int i = 0; i < height; i++) {
        
        // Inner loop handles the asterisks on the current line (width)
        for (int j = 0; j < width; j++) {
            cout << "*" << " ";
        }
        
        // Go to the next line after finishing the row
        cout << endl;
    }

    return 0;
}