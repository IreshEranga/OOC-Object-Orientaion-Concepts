// VersionF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

int main()
{
    Course c1, c2, c3, c4;

    c1.setCourseDetails(1050, "OOC", 2);
    c2.setCourseDetails(1060, "SPM", 2);
    c3.setCourseDetails(1100, "IWT", 2);
    c4.setCourseDetails(1090, "ISDM", 2);

    c1.setCreditPoints();
    c2.setCreditPoints();
    c3.setCreditPoints();
    c4.setCreditPoints();

    c1.displayCourseDetails();
    c2.displayCourseDetails();
    c3.displayCourseDetails();
    c4.displayCourseDetails();
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
