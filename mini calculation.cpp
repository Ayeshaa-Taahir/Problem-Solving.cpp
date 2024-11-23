1- A program which ask a user to choose a number (1-4)
from the display menu to perform the following functions:
● For “1” calculate the square root of that number.
● For “2” calculate the cube of that number.
● For “3” print that number 50 times.
● For “4” print the table of that number
#include <iostream>
using namespace std;

int main() {
    // Declare variable to store user input
    int choice, number;

    // Display menu
    cout << "Enter a number: ";
    cin >> number;
    cout << "Choose an option:\n1. Square\n2. Cube\n3. Print number 50 times\n4. Print multiplication table\n";
    cin >> choice;

    // Switch-case for various options
    switch(choice) {
        case 1:
            cout << "Square: " << number * number << endl;
            break;
        case 2:
            cout << "Cube: " << number * number * number << endl;
            break;
        case 3:
            for (int i = 0; i < 50; i++) {
                cout << number << " ";
            }
            cout << endl;
            break;
        case 4:
            for (int i = 1; i <= 10; i++) {
                cout << number << " x " << i << " = " << number * i << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}