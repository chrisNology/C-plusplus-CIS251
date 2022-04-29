// Assignment2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* 
    Converting Gallons to Liters
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable Declarations
    const double LITERS = 3.78533;
    int numGallons;
    double result;
    
    // Input
    cout << "\nEnter the number of Gallons: ";
    cin >> numGallons;

    // Process
    result = numGallons * LITERS;

    // Output
    cout << numGallons << " Gallons is " << result << " Liters\n";
}


