#pragma once
#include <iostream>

using namespace std;

class Lab
{
private:
	int labId;
	int capacity;

public:
	void setLabDetails(int lid,int c);
	int getCapacity();
};

