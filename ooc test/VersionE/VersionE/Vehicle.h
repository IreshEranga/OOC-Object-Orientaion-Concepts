#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private :
	int vehicleID;
	string vehicleBrand;
	string vehicleType;
	int vehiclePrice;

public :
	void setVehicleDetails(int vid, string vbrand, string vtype, int vprice);
	void displayVehicleDetails();
	void setVehicleprice();
};

