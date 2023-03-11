#include <stdio.h>

int main()
{
	float sub1, sub2, avg;
	
	printf("Enter marks :");
	scanf("%f", &sub1);
	
	printf("Enter marks :");
	scanf("%f", &sub2);
	
	avg = (sub1 + sub2)/2.0;
	printf("Average is : %.2f",avg);
	
	return 0;
}
