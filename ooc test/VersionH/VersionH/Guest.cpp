#include "Guest.h"
#include<iostream>
#include <string>

using namespace std;

void Guest::setGuestDetails(int gid, string gname, int rp, int d)
{
	guestID = gid;
	guestName = gname;
	ratePerDay = rp;
	numberOfdays = d;
}

int Guest::calculateGuestbbill()
{
	return ratePerDay * numberOfdays;
}

void Guest::displayGuestDetails()
{
	cout << "Guest ID = " << guestID << endl;
	cout << "Guest name = " << guestName << endl;
	cout << "Bill Amount = " << calculateGuestbbill() << endl << endl;
}