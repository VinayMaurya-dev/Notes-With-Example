//3. Check whether the given number is multiple of 7 or not.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number :\n");
	scanf("%d",&num);
	if(num%7==0)
	{
		printf("Yes ! this number is multiple of 7");
	}
	else
	{
		
		printf("Sorry ! this number is not multiple of 7");
	}
}

