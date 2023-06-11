#pragma once
#include<string>

using namespace std;

class Event
{
private:
	int eventId;
	string eventType;
	string themeColor;
	string location;

public:
	void setEventDetails(int eid, string etype, string tcolor, string eloc);
	void displayEventDetails();
	void setEventLocation();
};

