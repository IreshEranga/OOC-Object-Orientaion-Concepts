#pragma once

#include<string>
using namespace std;

class Patient
{
private:
	int appointmentID;
	string patientName;
	float doctorCharge;
	float hospitalcharge;

public:
	void setPatientDetails(int aid, string pname);
	void displayPatientDetails();
	void setDoctorCharge(float dcharge);
	void setHospitalCharge(float hcharge);
	float calculateTotalPayment();
};

