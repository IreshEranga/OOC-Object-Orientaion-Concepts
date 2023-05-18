#pragma once
#include<iostream>
using namespace std;

class Guest
{
private:
	int guestID;
	string guestName;
	int ratePerDay;
	int numberOfdays;

public:
	void setGuestDetails(int gid, string gname, int rp, int d);
	void displayGuestDetails();
	int calculateGuestbbill();
};

