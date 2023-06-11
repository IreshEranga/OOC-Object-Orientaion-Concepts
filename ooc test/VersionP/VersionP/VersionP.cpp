// VersionP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Student s1, s2, s3;

    s1.setStudentDetails(1234, "Kylie", 75, 80, 60);
    s2.setStudentDetails(4321, "James", 65, 70, 85);
    s3.setStudentDetails(6543, "Kyson", 90, 85, 80);

    double s1;
    double s2;
    double s3;

    
    cout << "Total Marks = " << s1.getMarksOOC() + s1.getMarksSPM() + s1.getMarksISDM() << endl;

    avgS1 = (s1.getMarksOOC() + s1.getMarksSPM() + s1.getMarksISDM()) / 3.0;
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
