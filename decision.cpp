1- A program to input a single letter in char variable. if "m" is input print "You
are a male" otherwise print "You are a female"

#include <iostream>
using namespace std;

int main() {
    // Declare variable to store gender input
    char gender;

    // Input gender
    cout << "Enter gender ('m' for male, 'f' for female): ";
    cin >> gender;

    // Check if input is 'm' or 'f' and display message accordingly
    if (gender == 'm') {
        cout << "You are a male." << endl;
    } else {
        cout << "You are a female." << endl;
    }

    return 0;
}