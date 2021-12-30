//WAP to print square of number only if number is 5 or 3
#include<stdio.h>
void main()
{
	int a,sq;
	printf("Enter a value : ");
	scanf("%d",&a);
	if(a==5||a==3)
	{
	sq=a*a;
	printf("Square value of %d = %d",a,sq);	
	}
	
}
