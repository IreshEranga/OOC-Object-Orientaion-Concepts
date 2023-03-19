#include <iostream>
#include <iomanip>
int main()		//main function begin
{
	int no;		//variable declaration
	float fac;
	
	std::cout<<"Enter a number :";
	std::cin>>no;
	
	fac = 1;
	
	for(int r = no; r >= 1 ; r--)
	{
		fac = fac * r;
	}
	
	std::cout<<"Factorical of "<<no<< " is "<<std::fixed<<std::setprecision(1)<<fac;
	return 0;
}
