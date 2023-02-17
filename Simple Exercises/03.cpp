#include <iostream>
#include <iomanip>

using namespace std;

int main()		//main function begin
{
	float length, width, perimeter;		//variable declaration
	
	cout<<"Enter Length of rectangle :";	//get user inputs
	cin>>length;
	
	cout<<"Enter width of rectangle :";
	cin>>width;
	
	perimeter = 2 * (length + width);		//formular to calculate the perimeter of rectangle
	
	cout<<"Perimeter of rectangle = "<<fixed<<setprecision(2)<<perimeter<<endl;		//display the perimeter of rectangle
	
	return 0;
}		//end of the main function
