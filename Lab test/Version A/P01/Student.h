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
	void setStudentDetails(int sid, string sname);
	void setmarksOOC(int ooc);
	int getmarksOOC();
	void setmarksSPM(int spm);
	int getmarksSPM();
	void setmarksISDM(int isdm);
	int getmarksISDM();
};

