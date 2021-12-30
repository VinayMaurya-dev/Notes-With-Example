//wap  to check a given number is a prime or not.
#include<stdio.h>
void main()
{
	int i, n,count=0;
	printf("Enter a number to check number is prime or not : ");
	scanf("%d",&n);
	if(n!=1)
	{
	for(i=1;i<=n;i++)
	//for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;	
		}
	}
	if(count==2)
			{
				printf("%d is a prime number",n);
			}
			else
			{
				printf("%d is not prime number ",n);
			}
}
   else
   {
		printf("1 is prime number ");
   }
}
