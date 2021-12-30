// 6. Write a program to check whether the given year is a leap year or not.
#include<stdio.h>
void main()
{
	int year;
	printf("Enter a year :\n");
	scanf("%d",&year);
	if(year%400==0)
	{
	if(year%4==0)
	{
		printf("Yes ! This year is a leap Year");
	}
		
	}
	else if(year%100==0)
	
		{
		printf("Sorry ! This year is not  leap Year  ");
		}

	else
	{
		
		printf("Sorry ! This year is not  leap Year  ");
	}
}

