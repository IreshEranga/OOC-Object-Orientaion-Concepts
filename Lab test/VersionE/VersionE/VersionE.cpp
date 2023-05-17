// VersionE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

int main()
{
    Vehicle v1, v2, v3;

    v1.setVehicleDetails(1, "Toyota", "SUV", 8500000);
    v2.setVehicleDetails(2, "Nissan", "Saloon", 6000000);
    v3.setVehicleDetails(3, "Honda", "Convertible", 7200000);

    v1.setVehicleprice();
    v2.setVehicleprice();
    v3.setVehicleprice();

    v1.displayVehicleDetails();
    v2.displayVehicleDetails();
    v3.displayVehicleDetails();

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
