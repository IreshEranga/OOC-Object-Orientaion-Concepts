#include "Event.h"

#include <iostream>

using namespace std;

void Event::setEventDetails(int eid, string etype, string tcolor, string eloc)
{
	eventId = eid;
	eventType = etype;
	themeColor = tcolor;
	location = eloc;
}

void Event::displayEventDetails()
{
	cout << endl;
	cout << "Event Type = " << eventType << endl;
	cout << "Theme Color = " << themeColor << endl;
	cout << "location = " << location << endl;
	cout << endl;
}

void Event::setEventLocation()
{
	cout << "Input new ocation of event " << eventId << " = ";
	cin >> location;
}
