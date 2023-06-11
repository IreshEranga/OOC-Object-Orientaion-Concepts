#pragma once
#include <iostream>
using namespace std;

class Book
{
private:
	int bookID;
	string bookName;
	string author;

public:
	void setBookDetails(int bid, string bname, string ba);
	void displayBookDetails();
	void setBookID(int i);
};

