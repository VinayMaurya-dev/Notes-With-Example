//wap to check number is polindrome  or not.
#include<stdio.h>
void main()
{
	int rem,num,temp,rev=0;
	printf("Enter a  number :");
	scanf("%d",&num);
	temp=num;
	for(;num>0;num=num/10)
	{
		rem=num%10;
		rev=rev*10+rem;
	}
	if(temp==rev)
	{
		printf("Yes ! This number is polindrome.");
	}
	else
	{
		printf("NO ! This number is not polindrome.");
	}
	
}
