//wap to count total number divisible by 3 and 7 and 7 within a given series.
#include<stdio.h>
void main()
{
	int i,num,count=0;
	printf("Enter a ending number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%3==0 && i%7==0 && i%9==0)
		{
			printf("%d\t",i);
			count++;
		}
	}
	printf("Total count value is = %d",count);
}
