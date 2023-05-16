// Version B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main()
{
    Employee e1, e2;

    e1.setEmployeeDetails(1111, "Nimal");
    e1.setotHours(22);
    e1.setotRate(100);

    e2.setEmployeeDetails(2222, "Sunil");
    e2.setotHours(18);
    e2.setotRate(200);

    e1.displayEmployeeDetails();
    e2.displayEmployeeDetails();
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
