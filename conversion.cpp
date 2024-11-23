1- A program that input the distance between a place and your home in miles
and convert that into KM, meters, centimeters, millimeters, and micrometers
and then print all these computed values on screen

#include <iostream>
using namespace std;
int main() {
    // Declare variables
    double distanceMiles; // Input distance in miles
    double distanceKm, distanceMeters, distanceCm, distanceMm, distanceMicrometers;

    // Input the distance in miles
    cout << "Enter the distance between SHU and your home (in miles): ";
    cin >> distanceMiles;

    // Perform conversions
    distanceKm = distanceMiles * 1.60934;          // 1 mile = 1.60934 km
    distanceMeters = distanceKm * 1000;            // 1 km = 1000 meters
    distanceCm = distanceMeters * 100;             // 1 meter = 100 cm
    distanceMm = distanceCm * 10;                  // 1 cm = 10 mm
    distanceMicrometers = distanceMm * 1000;       // 1 mm = 1000 micrometers

    // Display results
    cout << "\nConversions:\n";
    cout << "Distance in kilometers: " << distanceKm << " km\n";
    cout << "Distance in meters: " << distanceMeters << " m\n";
    cout << "Distance in centimeters: " << distanceCm << " cm\n";
    cout << "Distance in millimeters: " << distanceMm << " mm\n";
    cout << "Distance in micrometers: " << distanceMicrometers << " micrometers\n";

    return 0;
}