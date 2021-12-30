//WAP to print square of a number only if value is equals to 5.
#include<stdio.h>
void main()
{
	int a,sq;
	printf("Enter a value : ");
	scanf("%d",&a);
	if(a%5==0)
	{
	sq=a*a;
	printf("Square value of %d = %d",a,sq);	
	}
	
}
