1- To solve the quadratic equation which is having 3
input variables a, b, c. Assign float values of your choice into a and b variables and take the integer input value at run time in c variables. You have to evaluate the
formula two times with – and + values so you have two output values must be
saved in x1, and x2 variable

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    float discriminant, x1, x2;

    cout << "Enter values for a, b, and c (for equation ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    // Calculate discriminant
    discriminant = pow(b, 2) - (4 * a * c);

    // Check if discriminant is non-negative
    if (discriminant >= 0) {
        // Calculate roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        // Display results
        cout << "Root 1 (x1): " << x1 << endl;
        cout << "Root 2 (x2): " << x2 << endl;
    } else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}

