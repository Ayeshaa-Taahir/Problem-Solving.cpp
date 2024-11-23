1- To solve the equation, using precedence rules for the arithmetic operators’ usage.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double a, b, c, d, x, y, result;

    // Input variables
    cout << "Enter values for a, b, c, d, x, y: ";
    cin >> a >> b >> c >> d >> x >> y;

    // Calculate the result using precedence rules
    result = (7 * 7 * b * (x * y + a) / c) - 0.8 + (2 * b * d * (1 / y));

    // Display the result
    cout << "Result of the expression is: " << result << endl;

    return 0;
}