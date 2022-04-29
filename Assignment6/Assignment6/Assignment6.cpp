// Assignment6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Program reads a file, counts the values and outputs the average

#include <iostream>
#include <fstream> // for files
#include <cstdlib> // for exit
using namespace std;

int main()
{
    // Variable declarations

    ifstream input;
    char name[13];
    double value = 0, average;
    double sum = 0;
    int count = 0;

    // Check for file and open if it exists
    input.open("mynumber.txt");
    if (!input)
    {
        cout << "Cannot open file "
            << name << " Aborting."
            << endl;
        exit(1);
    }
    
    // Read the file and count the numbers and get sum
    input >> value;
    while (input)
    {
        count = count + 1;
        sum = sum + value;
        input >> value;
    }
    
    // Calculate the average and output
    average = sum / count;
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "Average of " << count
        << " number is " << average
        << endl;
    return 0;
}


