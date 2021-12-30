//wap to find factorial value  from user.
#include<stdio.h>
void main()
{
	int i, n,c=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=n*i;
	}
	printf("factorial value of %d is = %d",n,c);
}
