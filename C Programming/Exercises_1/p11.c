//WAP to print sum of square of two numbers only if first 
// number is greater than 5 and second is exactly 5.
#include<stdio.h>
void main()
{
	
	int num1,num2,sq;
	printf("Enter a two num only  for print square value of sum and  num should be greater than 5:\n ");
	printf("Enter a first num:-\n ");
	scanf("%d",&num1);
	printf("Enter a second num :\n ");
	scanf("%d",&num2);
	if(num1>5&&num2==5)
	{
	sq=(num1*num1)+(num2*num2);
	printf("Squre value of %d and %d sum is = %d",num1,num2,sq);	
	}
	else
	{
		printf("Sorry ! Try again Later");
	}
}
