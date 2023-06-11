// 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Event.h"

#include <iostream>

using namespace std;

int main()
{
	Event* e1 = new Event();
	Event* e2 = new Event();
	Event* e3 = new Event();

	e1->setEventDetails(1, "party", "red", "Nugegoda");
	e2->setEventDetails(2, "wedding", "purple", "Maharagama");
	e3->setEventDetails(3, "party", "pink", "Malabe");

	e1->setEventLocation();
	e2->setEventLocation();
	e3->setEventLocation();

	e1->displayEventDetails();
	e2->displayEventDetails();
	e3->displayEventDetails();

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
