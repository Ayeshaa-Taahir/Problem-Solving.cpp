1- To compare if  integers are equal or not.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, num3;

    // Input three integers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Compare the numbers using nested if
    if (num1 == num2) {
        if (num2 == num3) {
            cout << "All values are equal." << endl;
        } else {
            cout << "They all are not equal." << endl;
        }
    } else {
        cout << "They all are not equal." << endl;
    }

    return 0;
}