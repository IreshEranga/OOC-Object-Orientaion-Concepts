#include <stdio.h>

int main()		//main function begin
{
	float distance, amou;		//variable declaration
	
	printf("Input the distance van has traveled :");	//get user inputs
	scanf("%f", &distance);
	
	if(distance <= 30)
	{
		amou = distance * 50;
	}
	else if(distance > 30)
	{
		amou = ((distance - 30) * (40)) + ((distance - 30) * 50);
	}
	return 0;
}		//end of the main function
