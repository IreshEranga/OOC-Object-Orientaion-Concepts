#include <stdio.h>

int main()		//main function begin
{
	int num, i ,sum;		//variable declaration
	
	sum = 0;
	
	printf("Enter a number :");		//get user inputs
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		sum = sum + i;
	}
	
	printf("Sum : %d", sum);
	
	return 0;
}		//end of the main function
