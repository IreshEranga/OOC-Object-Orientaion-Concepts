// VersionN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Train.h"

using namespace std;


int main()
{
    //create objects
    Train t1, t2, t3;

    t1.setTrainDetails(1, 200, "6.00AM", "Kandy");
    t2.setTrainDetails(2, 150, "7.30AM", "Galle");
    t3.setTrainDetails(3, 300, "4.30AM", "Jaffna");

    t1.setStartTime();
    t2.setStartTime();
    t3.setStartTime();

    t1.displayTrainDetails();
    t2.displayTrainDetails();
    t3.displayTrainDetails();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
