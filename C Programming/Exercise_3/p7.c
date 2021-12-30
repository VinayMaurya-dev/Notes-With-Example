//wap to print following statement;
//7, 10, 15, 22, 31, 42
#include<stdio.h>
void main()
{
	int i, n=1;
	for(i=7;i<=42;i=i+n)
	{
		n=n+2;
		printf("%d\n",i);
	}
}
