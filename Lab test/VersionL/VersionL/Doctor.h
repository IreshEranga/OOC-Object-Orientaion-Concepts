#pragma once

#include<iostream>

using namespace std;

class Doctor
{
private:
	int doctorID;
	string doctorName;
	string specialization;
	string hospital;

public:
	void setDoctorDetails(int did, string dname, string spe, string h);
	void displaydoctorDetails();
	string getSpecialization();
	void setHospital();
};

