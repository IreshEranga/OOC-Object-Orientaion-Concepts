#include <iostream>

long Factorial(int no);		//function prototytpe
long nCr(int n, int r);

int main()		//main function begin
{
	int n, r;			//variable declaration
	
	std::cout<<"Enter value for n :";		//get user inputs
	std::cin>>n;
	
	std::cout<<"Enter value for r :";
	std::cin>>r;
	
	std::cout<<"nCr = ";
	std::cout<<nCr(n,r);
	std::cout<<std::endl;
	
	return 0;
}		//end of the main function

long Factorial(int no)
{
	long fac;
	int i;
	fac = 1;
	
	for(i=no;i>=1;i--)
	{
		fac = fac * i;	
	} 
	return fac;
}

long nCr(int n, int r)
{
	long	nn = Factorial(n);
	long	rr = Factorial(r);
	long	nr = Factorial(n-r);
	
	long	nCrr = (float)nn/(rr*nr);
	
	return nCrr;
}
