#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d",i);
		if(i==3)
		break;
	}
}