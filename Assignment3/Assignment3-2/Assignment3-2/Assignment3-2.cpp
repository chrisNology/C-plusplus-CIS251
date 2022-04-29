// Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
    This program will calculate interest based on user input value
*/

#include <iostream>
using namespace std;

// Global Variables
const double INTEREST_RATE1 = 0.015;  // 1.5 %
const double INTEREST_RATE2 = 0.01;   // 1 %
const double MINPAY_FRACTION = 0.10; // 10 %

int main()
{
    // Variable Declarations
    char ans;
    double balance, interestDue, totalDue, minPay, minPayDue;

    do {

        // Input
        cout << "Enter the account balance, please: ";
        cin >> balance;

        // Process Logic
        if (balance <= 1000) {
            interestDue = balance * INTEREST_RATE1;
            totalDue = balance + interestDue;
        }

        else if (balance > 1000) {
            interestDue = 1000 * INTEREST_RATE1 + (balance - 1000) * INTEREST_RATE2;
            totalDue = balance + interestDue;
        }

        // Minimum Payment Due
        if (totalDue <= 10) {
            minPay = totalDue;
            minPayDue = minPay;
        }
        else {
            minPay = totalDue * MINPAY_FRACTION;
            minPayDue = minPay; // Removed totalDue + to fix glitch
        }
        // Output
        cout << "Interest due: " << interestDue << endl;
        cout << "Total due: " << totalDue << endl;
        cout << "Minimum Payment: " << minPayDue << endl;

        cout << "Enter Y or y to enter another balance. Any other key quits\n" << endl;

        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

