// CSC 134
// M2LAB - Crate Builder
// Caeley
// 09/26/26

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Constants for cost and charge per cubic foot
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;

    // Variables for dimensions, measurements, and financials
    double length, width, height;
    double volume;
    double cost, charge, profit;

    // Set formatting for currency and decimal output
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for dimensions
    cout << "Enter dimensions of the crate (in feet):" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate volume and financial metrics
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the results
    cout << "\n--- Crate Specification Summary ---" << endl;
    cout << "Volume: " << volume << " cubic feet" << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}