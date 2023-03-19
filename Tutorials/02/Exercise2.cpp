#include <iostream>

int main() //main function begin
{
	double salary, netSalary;		//variable declaration
	int etype, otHrs, otRate;
	
	std::cout<<"Enter employee type :";		//get user inputs
	std::cin>>etype;
	
	std::cout<<"Enter salary :";
	std::cin>>salary;
	
	std::cout<<"Enter OT hours :";
	std::cin>>otHrs;
	
	switch(etype){
		
		case 1 :
			otRate = 1000;
			break;
			
		case 2 :
			otRate = 1500;
			break;
			
		default :
			otRate = 1700;
			break; 

	}
	
	netSalary = salary + otHrs * otRate;
	
	std::cout<<"Net salary is "<<netSalary;
	
	return 0;
}		//end of the main function
