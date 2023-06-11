#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

void Student::setStudentDetails(int sid, string sname, int ooc, int spm, int isdm)
{
	studentID = sid;
	studentName = sname;
	marksOOC = ooc;
	marksSPM = spm;
	marksISDM = isdm;
}

int Student::getStudentID()
{
	return studentID;
}
int Student::getMarksOOC()
{
	return marksOOC;
}
int Student::getMarksSPM()
{
	return marksSPM;
}
int Student::getMarksISDM()
{
	return marksISDM;
}
