1- A program using different logical operators together

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    char gender, city;
    int age;
    double salary;

    // Input salary, gender, age, and city
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter gender ('M' for male, 'F' for female): ";
    cin >> gender;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter city ('K' for Karachi, 'H' for Hyderabad, 'S' for Sukker, 'G' for Ghotki): ";
    cin >> city;

    // Logic to calculate net salary based on conditions
    if (gender == 'F' && age >= 25 && age <= 35 && (city == 'K' || city == 'H')) {
        salary += 2000; // Add Rs. 2000 for female in specific cities and age range
    } else if (gender == 'M' && age >= 25 && age <= 40 && (city == 'S' || city == 'G')) {
        salary += 2500; // Add Rs. 2500 for male in specific cities and age range
    }

    // Output the net salary
    cout << "Net salary: Rs. " << salary << endl;

    return 0;
}