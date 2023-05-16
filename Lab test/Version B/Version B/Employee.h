#pragma once
#include <iostream>
using namespace std;

class Employee
{
private :
	int employeeID;
	string employeeName;
	int otHours;
	int otRate;

public:
	void setEmployeeDetails(int empid, string empname);
	void displayEmployeeDetails();
	void setotHours(int oth);
	void setotRate(int otr);
	int calculateotPayment();
};

