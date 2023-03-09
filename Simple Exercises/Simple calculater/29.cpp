#include <iostream>

float cal(int num1, int num2, char method);		//function prototype

using namespace std;

int main(){
	
	int num1, num2;		//variable declaration
	char method;
	
	cout << "Enter a number :";			//get user inputs
	cin >> num1;
	
	cout << "Enter a number :";
	cin >> num2;
	
	cout << "Enter a calculation method :";
	cin >> method;
	
	cout << "result : " << cal(num1, num2, method);		//called function
	
	return 0;
}

float cal(int num1, int num2, char method){
	float result;
	
	if(method == '+')
	{
		result = num1 + num2;
	}
	else if(method == '-')
	{
		result = num1 - num2;
	}
	else if(method == '*')
	{
		result = num1 * num2;
	}
	else if(method == '/')
	{
		result = float(num1 / num2);
	}
	else
	{
		cout << "Invalid method -------";
	}
	
	return result;
}
