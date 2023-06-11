#include "Taxi.h"

#include <iostream>
#include <string>

using namespace std;

//class method definition
void Taxi::setTaxiDetails(int tid, string d, int rate, int dis)
{
	taxiID = tid;
	driver = d;
	ratePerKM = rate;
	distanceTravelled = dis;
}

void Taxi::displayTaxiDetails()
{
	cout << endl << "Taxi ID = " << taxiID << endl;
	cout << "Driver Name = " << driver << endl;
	cout << "BillAmount = " << calculateBill() << endl;
}

int Taxi::calculateBill()
{
	return ratePerKM * distanceTravelled;
}
