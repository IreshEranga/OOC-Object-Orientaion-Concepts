#include <iostream>

int main() //main function begins
{
	
	float cm, inches;		//variable declaration
	
	std::cout<<"Enter a length in cm :";		//get user inputs
	std::cin>>cm;
	
	inches = cm / 2.54;
	
	std::cout<<"Length in inches is " << inches;
	
	return 0;
}		//end of the main function
