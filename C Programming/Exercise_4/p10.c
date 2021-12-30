// 17.Write a program to perform calculator operations( +, -, *, / ) on given two numbers. 
#include<stdio.h>
void main()
{
	int num1,num2,op;
	printf("Enter a first value :\n");
	scanf("%d",&num1);
	printf("Enter a second value :\n");
	scanf("%d",&num2);
	
	printf("Enter a operation value like (+ - * / ):\n\n");
	op=getche();
	if(op=='+')
	{
		printf("\nsum of two numbers = %d",num1+num2);
	}
	else if(op=='-')
	{
		printf("\nsubtract of two numbers = %d",num1-num2);
	}
	else if(op=='*')
	{
		printf("\nmultiply of two numbers = %d",num1*num2);
	}
	else if(op=='/')
	{
		printf("\nDivision of two numbers = %d",num1/num2);
	}
	else {
	
	printf("Enter a valid operation !");
	}
	
}
