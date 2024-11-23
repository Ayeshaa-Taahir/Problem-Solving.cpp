1- A program in which user to type his own ID, if the ID is valid it will ask him to
enter his password, if the password is correct the program will print the name of the
user, otherwise, the program will print Incorrect Password and if the ID does not exist ,
the program will print Incorrect ID 

#include <iostream>
using namespace std;

int main() {
    // Declare variables for user ID and password
    string userID, password;

    // Input user ID and password
    cout << "Enter your user ID: ";
    cin >> userID;
    
    // Use a switch-case to validate ID and password
    switch(userID == "aish123" ? 1 : 0) {
        case 1:
            cout << "Enter your password: ";
            cin >> password;
            if (password == "aishu975") {
                cout << "Welcome, Ayesha!" << endl;
            } else {
                cout << "Incorrect Password" << endl;
            }
            break;
        default:
            cout << "Incorrect ID" << endl;
    }

    return 0;
}