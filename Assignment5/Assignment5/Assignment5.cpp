// Assignment5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program converts inches/feet to centimeters/meters

#include <iostream>
#include <string>
using namespace std;

// Pass by reference with &
void ConsoleInput(double& feet, double& inches);

// User input function declaration
void LengthConversion(double& feet, double& inches, double& meters, double& centimeters);
void ConsoleOutput(double& meters, double& centimeters);

// Constant declarations
const double metersPerFoot = 0.3048;
const double cmPerMeter = 100;
const double inPerFoot = 12;

int main()
{
    double feet1, inches1, meters1, centimeters1;
    string decision;

    do
    {
        ConsoleInput(feet1, inches1); //
        cout << "The length in feet: " << feet1 << "ft\n";
        cout << "The length in inches: " << inches1 << "in\n";

        LengthConversion(feet1, inches1, meters1, centimeters1); //
        cout << "Converting feet to meters and inches to centimeters...\n";

        ConsoleOutput(meters1, centimeters1); //
        cout << "\nThank you for your participation. Would you like to try again?(Yes or No)\n";
        cin >> decision;
        
    } while (decision == "Yes", "yes", "Y", "y");

    return 0;

} // End of main

// Input function
void ConsoleInput(double& feet, double& inches)
{
    cout << "Enter length in feet: \n";
    cin >> feet;
    cout << "\nEnter length in inches: \n";
    cin >> inches;
}
//  Conversion function
void LengthConversion(double& feet, double& inches, double& meters, double& centimeters)
{
    meters = feet * metersPerFoot;

    centimeters = (((inches / inPerFoot) / metersPerFoot) / cmPerMeter);
}
// Output function
void ConsoleOutput(double& meters, double& centimeters)
{
    cout << "\nThe final length in meters is " << meters << "m\n";
    cout << "The final length in centimeters is " << centimeters << "cm\n";
}