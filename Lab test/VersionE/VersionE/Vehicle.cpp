#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

void Vehicle::setVehicleDetails(int vid, string vbrand, string vtype, int vprice)
{
	vehicleID = vid;
	vehicleBrand = vbrand;
	vehicleType = vtype;
	vehiclePrice = vprice;
}

void Vehicle::displayVehicleDetails()
{
	cout << "Vehicle ID = " << vehicleID << endl;
	cout << "Vehicle Brand = " << vehicleBrand << endl;
	cout << "Vehicle Type = " << vehicleType << endl;
	cout << "Vehicle price = " << vehiclePrice << endl<<endl;
}

void Vehicle::setVehicleprice()
{
	cout << "Input new price of vehicle " << vehicleID8 << " : ";
	cin >> vehiclePrice;
	cout << endl;
}