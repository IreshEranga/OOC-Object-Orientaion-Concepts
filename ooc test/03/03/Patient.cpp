#include "Patient.h"
#include <iostream>

using namespace std;

void Patient::setPatientDetails(int aid, string pname)
{
	appointmentID = aid;
	patientName = pname;
}

void Patient::setDoctorCharge(float dcharge)
{
	doctorCharge = dcharge;
}
void Patient::setHospitalCharge(float hcharge)
{
	hospitalcharge = hcharge;
}

void Patient::displayPatientDetails()
{
	cout << "Appointment Id = " << appointmentID << endl;
	cout << "Patient name = " << patientName << endl;
	
}

float Patient::calculateTotalPayment()
{
	return doctorCharge + hospitalcharge;
}
