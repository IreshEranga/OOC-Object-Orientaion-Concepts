#pragma once
#include <iostream>

using namespace std;

class Course
{
  private:
	int courseID;
	string courseName;
	int creditpoints;
public:
	void setCourseDetails(int cid, string cname, int cp);
	void displayCourseDetails();
	void setCreditPoints();
};

