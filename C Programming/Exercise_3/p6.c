//wap to print following statement;
// 8, 12, 17, 23, 30, 38
#include<stdio.h>
void main()
{
	int i, n=3;
	for(i=8;i<=38;i=i+n)
	{
		n=n+1;
		printf("%d\n",i);
	}
}
