#include <iostream>
#include <iomanip>

using namespace std;

float Perimeter(float &length, float &width);
float Cost(float Perimeter, float &cperm);

int main()
{
	float length = 28;
	float width = 15;
	float cperm;
	
	cout<<"Perimeter of fence is : "<<Perimeter(length,width)<<" m"<<endl;
	
	cout<<"Enter cost per meter : ";
	cin>>cperm;
	
	
	
	cout<<"Cost for fence : "<<setw(1)<<fixed<<setprecision(2)<<Cost(Perimeter(length,width), cperm)<<endl;
	
	return 0;
}

float Perimeter(float &length, float &width)
{
	return 2*(length + width);
}

float Cost(float Perimeter, float &cperm)
{

	return Perimeter * cperm;
}
