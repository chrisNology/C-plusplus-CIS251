// Assignment7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Method prototypes
double getTotalRainfall();
double getAverageRainfall();
double getMostRainfall();
double getLeastRainfall();
double rainfall[3];
string month[] = {"Jan","Feb","Mar"};
int i = 1;
double totalRainfall, leastRainfall, mostRainfall, averageRainfall;

int main()
{
    // cout << "Enter the inches of rainfall for each month: " << endl';
    // cin >> rainfall[0];
    totalRainfall = 0;
    // Input with for loop
    for (int count = 0; count < 3; count++) // Count for each month
    {
        cout << "How many inches of rain does " << i << endl;
        cout << " have? \n";
        cin >> rainfall[count];
        // Calculate Total
        totalRainfall += rainfall[count];
        i++;
        while (rainfall[count] < 0)
        {
            cout << "Please enter a number greater than 0." << endl; //
            cin >> rainfall[count];
        }



    } // End of for loop

    cout << "The total rainfall is: " << getTotalRainfall() << endl;
    cout << "The average rainfall is: " << getAverageRainfall() << endl;
    cout << "The most rainfall is: " << getMostRainfall() << endl;
    cout << "The least rainfall is: " << getLeastRainfall() << endl;
    
    return 0;
}

double getTotalRainfall()
{
    return totalRainfall;
}

double getAverageRainfall()
{
    averageRainfall = totalRainfall / 3;
    return averageRainfall;
}

double getMostRainfall()
{
    mostRainfall = rainfall[0];
    for (i = 1; i < 3; i++)
    {
        if (rainfall[i] > mostRainfall)
        {
            mostRainfall = rainfall[i];
        }
    }
    return mostRainfall;

}

double getLeastRainfall()
{
    leastRainfall = rainfall[0];
}
