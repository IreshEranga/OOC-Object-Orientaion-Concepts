#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float tot, dis, finaltot;		//variable declaration
	
	cout<<"Enter Total price :";		//get user inputs
	cin>>tot;
	
	if(tot > 10000)
	{
		dis = tot * 25/100.0;
	}
	else if(tot > 5000)
	{
		dis = tot * 15/100.0;
	}
	else if(tot > 3000)
	{
		dis = tot * 10/100.0;
	}
	else
	{
		dis =tot *  0;
	}
	
	finaltot = tot - dis;
	
	cout<<"Discount is "<<fixed<<setprecision(2)<<dis<<endl;
	cout<<"Final Bill Amount is :"<<fixed<<setprecision(2)<<finaltot<<endl;			//display final amout to be pay
}
