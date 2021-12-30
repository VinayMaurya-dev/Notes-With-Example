//wap to read 5 value s from user and count total positive and negative
//number present.
//wap to count how many numeber are divisible by 3 and how many from 5 within 1 to 50.
#include<stdio.h>
void main()
{
	int i, three=1,five=1;
	printf("1 to 50 \n");
	for(i=1;i<=50;i++)
	{
		if(i%3==0)
		{
			three=three+1;
		}
		else if(i%5==0)
		{
			five=five+1;
		}
		else
		{
			
		}
		
	} 
	printf("divisible by 3  total value is = %d\n\n   divisible by 5 total value is = %d",three,five);
	
}
