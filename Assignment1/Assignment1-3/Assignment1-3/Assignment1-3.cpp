// Assignment1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int numOfQuarters, numOfDimes, numOfNickels, total;
    
    cout << "\n\n";
    cout << "Enter number of Quarters:\n";
    cin >> numOfQuarters;

    cout << "Enter number of Dimes:\n";
    cin >> numOfDimes;

    cout << "Enter number of Nickels:\n";
    cin >> numOfNickels;    
    
    numOfQuarters = numOfQuarters * 25;
    numOfDimes = numOfDimes * 10;
    numOfNickels = numOfNickels * 05;

    total = numOfQuarters + numOfDimes + numOfNickels;
    
    cout << "\n\n";
    cout << "Your coins are worth ";
    cout << total;
    cout << " cents.\n\n";

    return 0;
}

