#include "Train.h"

#include <iostream>

using namespace std;

void Train::setTrainDetails(int tid, int c, string st, string des)
{
	trainID = tid;
	capacity = c;
	startTime = st;
	destination = des;
}

void Train::displayTrainDetails()
{
	cout << endl << "train ID = " << trainID << endl;
	cout << "capacity = " << capacity << endl;
	cout  << "Start Time = " << startTime << endl;
	cout <<  "Destination = " << destination << endl<<endl;
}

void Train::setStartTime()
{
	cout << "Input new start time of train " << trainID << " : ";
	cin >> startTime;
	cout << endl;
}
