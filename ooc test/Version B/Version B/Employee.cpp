#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

void Employee::setEmployeeDetails(int empid, string empname)
{
    employeeID = empid;
    employeeName = empname;
}

void Employee::setotHours(int oth)
{
    otHours = oth;
}

void Employee::setotRate(int otr)
{
    otRate = otr;
}

int Employee::calculateotPayment()
{
    return otHours * otRate;
}

void Employee::displayEmployeeDetails()
{
    cout << "Employee ID : " << employeeID << endl;
    cout << "Employee Name : " << employeeName << endl;
    cout << "OT Payment : " << calculateotPayment() << endl<<endl;
}
