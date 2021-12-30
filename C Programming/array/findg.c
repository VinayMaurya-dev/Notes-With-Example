//wap to find greater two number.
#include<stdio.h>
void find(int a, int b) 
{
	if(a>b)
	{
		printf("a is greater than b");
	}
	else
	printf("b is greater than a");
}
void main()
{
	int a  ,b;
	printf("Enter 2 value for find greatest value :\n");
	scanf("%d%d",&a,&b);
	find(a,b);
}
