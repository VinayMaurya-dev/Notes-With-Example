/*9.wap to input 10 element and find sum of two sequential elements.*/
#include<stdio.h>
void main()
{
	int num[10],i,j,sum[5],pos=0;
	printf("Enter a 10 Elemnet:\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Sequential array is :\n");//10 20 30 40 50 60 70 80 90 100
	for(i=0;i<=9;i=i+2)
	{
			sum[pos]=num[i]+num[i+1];
			pos++;
	}
	for(i=0;i<=4;i++)
	{
		printf("%d\t",sum[i]);
	}
}
