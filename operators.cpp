1- A program which shows the usage of conditional and all logical operators (OR,
AND and NoT
#include<iostream>
using namespace std;
int main() {
    // Declare variables
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Using conditional and logical operators
    if (num1 >= 0 && num2 >= 0) {
        cout << "Both numbers are non-negative." << endl;
    } else if (num1 < 0 || num2 < 0) {
        cout << "At least one number is negative." << endl;
    } else if (!(num1 == 0 && num2 == 0)) {
        cout << "Both numbers are non-zero." << endl;
    }

    return 0;
}
