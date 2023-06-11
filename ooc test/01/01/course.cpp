#include "course.h"
#include <iostream>

using namespace std;

void course::setCourseDetails(int cid, string cname, int cpt)
{
	courseID = cid;
	courseName = cname;
	creditPoints = cpt;
}
void course::displayCourseDetails()
{
	cout << "Course ID = " << courseID << endl
		<< "CourseName = " << courseName << endl
		<< "CreditPoint = " << creditPoints << endl << endl;
}

void course::setCreditPoints()
{
	cout << "Input new " << courseName << " credit points : ";
	cin >> creditPoints;
}