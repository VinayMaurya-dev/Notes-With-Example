//10.Write a program to check whether the entered number is less than 10 or not. 
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number :\n");
	scanf("%d",&num);
	if(num<10)
	{
		printf("Yes ! This number is less than 10");
	}
	else
	{
		
		printf("Sorry ! This number is  not less than 10  ");
	}
}

