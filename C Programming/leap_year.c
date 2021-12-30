//wap to find leap year
#include<stdio.h>
void main()
{
	
	int year;
	printf("Enter a year to find year is leap year.");
	scanf("%d",&year);
	if(year>2000){
		if(year%4==0)
		{
			printf("Yes ! This is a leap Year");
		}
	}
}
