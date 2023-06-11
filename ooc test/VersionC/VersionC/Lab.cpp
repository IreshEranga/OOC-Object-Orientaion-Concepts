#include "Lab.h"
#include <iostream>

using namespace std;

void Lab::setLabDetails(int lid, int c)
{
	labId = lid;
	capacity = c;
}

int Lab::getCapacity()
{
	return capacity;
}
