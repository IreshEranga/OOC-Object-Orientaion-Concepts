#pragma once

#include <iostream>

using namespace std;

//class definition
class Taxi
{
private:
	int taxiID;
	string driver;
	int ratePerKM;
	int distanceTravelled;

public:
	void setTaxiDetails(int tid, string d, int rate, int dis);
	void displayTaxiDetails();
	int calculateBill();
};

