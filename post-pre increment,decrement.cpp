1- Using the increment and decrement operator:-

#include <iostream>
using namespace std;
int main() {
    // Declare and initialize an integer variable with the value 6
    int num = 6;

    // Display initial value
    cout << num << endl;

    // Apply increment operator
    cout << num++ << endl; // Post-increment
    cout << num++ << endl; // Post-increment

    // Apply decrement operator
    cout << num++ << endl; // Post-increment
    cout << --num << endl; // Pre-decrement

    // Final value of num after all operations
    cout << num + 2  << endl;

    return 0;
}

