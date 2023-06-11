#include "Course.h"
#include <iostream>
#include <string>

using namespace std;

void Course::setCourseDetails(int cid, string cname, int cp)
{
	courseID = cid;
	courseName = cname;
	creditpoints = cp;
}

void Course::displayCourseDetails()
{
	cout << "Course ID = " << courseID << endl;
	cout << "Course Name = " << courseName << endl;
	cout << "Credit Points = " << creditpoints << endl << endl;
}

void Course::setCreditPoints()
{
	cout << "Input New " << courseName << " credit points : ";
	cin >> creditpoints;
	cout << endl;
}
