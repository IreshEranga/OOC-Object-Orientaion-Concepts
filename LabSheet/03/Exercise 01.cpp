#include <iostream>
#include <iomanip>

using namespace std;

struct circle{
	float radius;
};

struct rectangle{
	float length;
	float width;
};

struct square{
	float length;
};

//function prototype
float areaCircle(float radius);
float areaRectangle(float length, float width);
float areaSquare(float length);

int main()	//main function begin
{
	circle c1;
	rectangle r1;
	rectangle r2;
	
	square s1;
	
	c1.radius = 5;
	r1.length = 7;
	r1.width = 3;
	r2.length = 28;
	r2.width = 15;
	s1.length = 4;
	
	cout<<"Area of the Pond : "<<setw(3)<<fixed<<setprecision(3)<<areaCircle(c1.radius)<<endl;
	cout<<"Are of rectangle building : " <<setw(3)<<fixed<<setprecision(3)<<areaRectangle(r1.length, r1.width)<<endl;
	cout<<"Are of Land : " <<setw(3)<<fixed<<setprecision(3)<<areaRectangle(r2.length, r2.width)<<endl;
	cout<<"Area of the Square building : "<<setw(3)<<fixed<<setprecision(3)<<areaSquare(s1.length)<<endl<<endl;
	
	cout<<"Area of the grass land : "<<setw(3)<<fixed<<setprecision(3)<<(areaRectangle(r2.length, r2.width)-((areaCircle(c1.radius)) + (areaRectangle(r1.length, r1.width)) + (areaSquare(s1.length))));
	return 0;
}		//end of the main function

float areaCircle(float radius)
{
	return (22/7.0) * radius * radius;
}

float areaRectangle(float length, float width)
{
	return length * width;
}

float areaSquare(float length)
{
	return length * length;
}
