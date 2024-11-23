#include <iostream>
using namespace std;

1- a program to input marks obtained by a student in a subject. The total
marks are 100

int main() {
    // Declare variable to store marks
    int marks;

    // Input marks
    cout << "Enter marks obtained (out of 100): ";
    cin >> marks;

    // Grade determination using if-else
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 70) {
        cout << "Grade: A" << endl;
    } else if (marks >= 50) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}