#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	printf("total sum is = %d",sum);
}
