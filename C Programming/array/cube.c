#include<stdio.h> 
void cube(n)
{
	printf("Cube value of %d is =%d",n,(n*n*n));
}
void main()
{
	int c;
	printf("Enter a value to find Cube :");
	scanf("%d",&c);
	cube(c);
}
