#pragma once
#include <iostream>
using namespace std;

class Train
{
private:
	int trainID;
	int capacity;
	string startTime;
	string destination;

public:
	void setTrainDetails(int tid, int c, string st, string des);
	void displayTrainDetails();
	void setStartTime();
};

