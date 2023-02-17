#include <iostream>

using namespace std;

int main()
{
	int num;
	// USING WHILE LOOP
	
	num = 1000;
	
	while(num >= 100)
	{
		cout<<num<<endl;
		num -= 100 ;
	}
	
	//USING DO WHILE LOOP
	
	cout<<endl<<endl;
	
	num = 1000;
	do
	{
		cout<<num<<endl;
		num -= 100;
	}while(num >= 100);
	
	//USING FOR LOOP
	
	cout<<endl<<endl;
	
	
	for(num = 1000; num >= 100; num -= 100)
	{
		cout<<num<<endl;
	}
	
	return 0;
	
}
