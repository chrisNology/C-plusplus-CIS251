// Assignment2-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    COMMENT HERE
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare our Variables
    string instructorName, myName, food, adjective, color, animal;
    int number;

    // Prompt User for Input
    cout << "\nEnter your instructor last name: ";
    cin >> instructorName;
    cout << "\nEnter your first name: ";    
    cin >> myName;
    cout << "\nEnter your favorite food, singular ie. Taco not Tacos: ";
    cin >> food;
    cout << "\nEnter a number between 100 and 120: ";
    cin >> number;
    cout << "\nEnter an adjective: ";
    cin >> adjective;
    cout << "\nEnter your favorite color: ";
    cin >> color;
    cout << "\nEnter your favorite animal: ";
    cin >> animal;


    // Process Output
    cout << "\n-----------------------------------------------------------------------------------" << endl;
    cout << "\n\nDear Instructor " << instructorName << "," << endl;
    cout << "\nI am sorry that I am unable to turn in my homework at this time.\n" << endl;
    cout << "First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill.\n" << endl;
    cout << "I came down with a fever of " << number << ".\n" << endl;
    cout << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework," << endl;
    cout << "because he ate it. \n\nI am currently rewriting my homework and hope you will accept it late." << endl;
    cout << "\nSincerely, " << endl;
    cout << "\n" << myName << endl;
    cout << "\n\n\n\n\n" << endl;
    





    return 0;
}


