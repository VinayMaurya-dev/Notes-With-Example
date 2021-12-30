//wap to print sum of squre   of all digits of a number.
#include<stdio.h>
void main()
{
	int rem,num,sum=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(;num>0;num=num/10)//121
	{
	rem=num%10;			
	sum=sum+rem*rem;
	}
	printf("sum of squre   of all digits of a number = %d",sum);
}
