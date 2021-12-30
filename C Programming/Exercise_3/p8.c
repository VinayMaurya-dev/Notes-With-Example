//wap to print following statement;
//12 , 11, 9, 6 , 2 
#include<stdio.h>
void main()
{
	int i, n=0;
	for(i=12;i>=2;i=i-n)
	{
		n=n+1;
		printf("%d\n",i);
	}
}
