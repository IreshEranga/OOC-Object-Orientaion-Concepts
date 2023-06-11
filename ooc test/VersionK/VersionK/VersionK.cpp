// VersionK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Taxi.h"

using namespace std;

int main()
{
    //create onjects
    Taxi t1, t2, t3;

    t1.setTaxiDetails(1234,"Ben",150,10);
    t2.setTaxiDetails(4321, "Chris", 250,4);
    t3.setTaxiDetails(3434, "Nick", 175,2);

    t1.calculateBill();
    t2.calculateBill();
    t3.calculateBill();

    t1.displayTaxiDetails();
    t2.displayTaxiDetails();
    t3.displayTaxiDetails();

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
