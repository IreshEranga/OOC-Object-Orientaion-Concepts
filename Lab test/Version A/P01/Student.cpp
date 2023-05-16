#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

void Student::setStudentDetails(int sid, string sname)
{
	studentID = sid;
	studentName = sname;
}

void Student::setmarksOOC(int ooc)
{
	marksOOC = ooc;
}

int Student::getmarksOOC()
{
	return marksOOC;
}

void Student::setmarksSPM(int spm)
{
	marksSPM = spm;
}

int Student::getmarksSPM()
{
	return marksSPM;
}

void Student::setmarksISDM(int isdm)
{
	marksISDM = isdm;
}

int Student::getmarksISDM()
{
	return marksISDM;
}