1- A program to calculate the electricity bill. First, the program takes the current
and previous reading as input from a user to compute the total unit consumed of the
month. The rates of electricity per unit are as
follows:
i) If the units consumed are equal or less than 300, then the cost of a unit is
Rs. 4/-per unit and the user will get the subsidy (reduction in bill) of 3% of
the gross bill.
ii) If units consumed are between 301 to 400, then the cost of a unit is Rs. 6/-
per unit.
iii) If the units consumed are greater than 400, then the cost of a unit is Rs. 7/-
per unit and a surcharge of 4% will be added in the gross bill.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int currentReading, previousReading, unitsConsumed;
    double billAmount;

    // Input readings
    cout << "Enter current reading: ";
    cin >> currentReading;
    cout << "Enter previous reading: "<<endl;
    cin >> previousReading;

    // Calculate units consumed
    unitsConsumed = currentReading - previousReading;

    // Calculate bill based on units consumed
    if (unitsConsumed <= 300) {
        billAmount = unitsConsumed * 4;
        billAmount -= billAmount * 0.03; // Apply subsidy
    } else if (unitsConsumed <= 400) {
        billAmount = unitsConsumed * 6;
    } else {
        billAmount = unitsConsumed * 7;
        billAmount += billAmount * 0.04; // Apply surcharge
    }

    // Output the bill amount
    cout << "Total electricity bill: Rs. " << billAmount << endl;

    return 0;
}