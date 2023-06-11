#include "Book.h"

#include <iostream>
#include <string>
using namespace std;

void Book::setBookDetails(int bid, string bname, string ba)
{
	bookID = bid;
	bookName = bname;
	author = ba;
}

void Book::displayBookDetails()
{
	cout << "Book ID : " << bookID << endl;
	cout << "Book Name : " << bookName << endl;
	cout << "Author : " << author << endl << endl;
}

void Book::setBookID(int i)
{
	cout << "Input new book ID " << i << ": ";
	cin >> bookID;
	cout << endl;
}