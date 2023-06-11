#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	int studentID;
	string studentName;
	int marksOOC;
	int marksSPM;
	int marksISDM;

public:
	void setStudentDetails(int sid, string sname, int ooc, int spm, int isdm);
	int getStudentID();
	int getMarksOOC();
	int getMarksSPM();
	int getMarksISDM();
};

