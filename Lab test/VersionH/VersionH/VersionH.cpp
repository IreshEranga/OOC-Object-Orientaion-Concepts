// VersionH.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Guest.h"
#include <string>

using namespace std;

int main()
{
	Guest g1, g2, g3;

	g1.setGuestDetails(1212, "Jared", 4500, 4);
	g2.setGuestDetails(1122, "Ben", 3000, 3);
	g3.setGuestDetails(1234, "Ruby", 5750, 2);

	g1.calculateGuestbbill();
	g2.calculateGuestbbill();
	g3.calculateGuestbbill();

	g1.displayGuestDetails();
	g2.displayGuestDetails();
	g3.displayGuestDetails();

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
