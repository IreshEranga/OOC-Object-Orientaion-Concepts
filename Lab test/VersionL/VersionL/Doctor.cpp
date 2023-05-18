#include "Doctor.h"

#include <iostream>
#include <string>

using namespace std;

void Doctor::setDoctorDetails(int did, string dname, string spe, string h)
{
	doctorID = did;
	doctorName = dname;
	specialization = spe;
	hospital = h;
}

void Doctor::displaydoctorDetails()
{
	cout << "Doctor ID : " <<doctorID<< endl;
	cout << "Doctor Name : " <<doctorName<< endl;
	cout << "Specialization : " <<specialization<< endl;
	cout << "Hospital : " <<hospital<< endl<<endl;
}

string Doctor::getSpecialization()
{
	return specialization;
}

void Doctor::setHospital() {
	cout << "Input new hostpital of doctor " << doctorID << " : ";
	cin >> hospital;
}