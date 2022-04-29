// Assignment4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This program calculates and finds the car with the best gas mileage

#include <iostream>
#include <string>
using namespace std;

// Global constant variables
const double litersPerGallon = 0.264179;

// Function Signature Declaration
double calculateMPG(double, double);

int main()
{
    
    double liters, miles, mpg = 0; // Data for Car 1

    double liters2, miles2, mpg2 = 0; // Data for Car 2
    string decision; //User option to repeat calculation

    do 
    {
        
        // Car 1 Input and Output
        cout << "Enter number of liters of gas for Car 1: ";
        cin >> liters;
        cout << "Enter number of miles travelled for Car 1: ";
        cin >> miles;
        // Calculate miles per gallon
        mpg = calculateMPG(liters, miles);
        // Display the results
        cout << mpg << " miles per gallon\n\n";

        // Car 2 Input and Output
        cout << "Enter number of liters of gas for Car 2: ";
        cin >> liters2;
        cout << "Enter number of miles travelled for Car 2: ";
        cin >> miles2;
        // Calculate miles per gallon 2
        mpg2 = calculateMPG(liters2, miles2);
        // Display the results 2
        cout << mpg2 << " miles per gallon\n\n";

        // Decisions Decisions
        if (mpg > mpg2)
        {
            cout << "The first car has better gas mileage with " << mpg << " MPG.\n\n";
        }
        else if (mpg2 > mpg)
        {
            cout << "The second car has better gas mileage with " << mpg2 << " MPG.\n";
        }
        else
        {
            cout << "Both cars have equal gas mileage.\n";
        }        
        
        cout << "Would you like to enter more numbers? (Type Y or N)\n";
        cin >> decision;    
    
    } while (decision == "Y" || decision == "y");

    return 0;

} // End of Main

double calculateMPG(double litersOfGas, double milesDriven) // Convert liters function
{
    double gallonsOfGas, calMPG;
    gallonsOfGas = litersOfGas * litersPerGallon;

    calMPG = milesDriven / gallonsOfGas;
    return calMPG;


}