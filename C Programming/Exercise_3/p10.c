// print sum of all number between 1 to n where num divide by 3 is equals to 2
//wap to add all number from given series
//wap to print sum of all numebr where number is not divided by 3 within 1 to n
// wap to add even number within n to 50
#include<stdio.h>
void main()
{
	int i,n ,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=n;i<=20;i++)
	{
		if(i%3==2)
		{
		sum=sum+i;
		if(i!=20)
		printf("%d+",i);	
		}
		else
		{
			printf("%d",i);		
		}
	}
	printf("=%d",i);
}
