1- A program which takes computes the SGPA of the semester by taking
credit hours of the course and grade point (GP) earned by the students of 5
courses :-

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double credit1, credit2, credit3, credit4, credit5;
    double gp1, gp2, gp3, gp4, gp5;
    double totalCreditHours, totalGradePoints, sgpa;

    // Input credit hours and grade points for 5 courses
    cout << "Enter credit hours and grade points for Course 1: ";
    cin >> credit1 >> gp1;

    cout << "Enter credit hours and grade points for Course 2: ";
    cin >> credit2 >> gp2;

    cout << "Enter credit hours and grade points for Course 3: ";
    cin >> credit3 >> gp3;

    cout << "Enter credit hours and grade points for Course 4: ";
    cin >> credit4 >> gp4;

    cout << "Enter credit hours and grade points for Course 5: ";
    cin >> credit5 >> gp5;

    // Calculate total credit hours and total grade points
    totalCreditHours = credit1 + credit2 + credit3 + credit4 + credit5;
    totalGradePoints = (credit1 * gp1) + (credit2 * gp2) + (credit3 * gp3) +
                       (credit4 * gp4) + (credit5 * gp5);

    // Calculate SGPA
    sgpa = totalGradePoints / totalCreditHours;

    // Display result
    cout << "Your SGPA is: " << sgpa << endl;

    return 0;
}
