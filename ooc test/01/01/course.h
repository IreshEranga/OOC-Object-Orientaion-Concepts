#pragma once
#include <string>
using namespace std;

class course
{
private:
	int courseID;
	string courseName;
	int creditPoints;
public:
	void setCourseDetails(int cid, string cname, int cpt);
	void displayCourseDetails();
	void setCreditPoints();
};

