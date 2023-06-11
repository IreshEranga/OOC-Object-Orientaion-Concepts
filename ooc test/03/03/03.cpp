// 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Patient.h"

using namespace std;

int main()
{
    Patient p1, p2;

    p1.setPatientDetails(1001, "Nimal");
    p2.setPatientDetails(1002, "Sunil");

    p1.setDoctorCharge(1500);
    p2.setDoctorCharge(1700);

    p1.setHospitalCharge(500);
    p2.setHospitalCharge(500);

    p1.displayPatientDetails();
    cout << "Total payment = " << p1.calculateTotalPayment() << endl << endl;

    p2.displayPatientDetails();
    cout << "Total payment = " << p2.calculateTotalPayment() << endl << endl;

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
