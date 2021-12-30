//wap to find multiplication of
// all numbers that is divisible by 3 and 5 both.
#include<stdio.h>
void main()
{
	int i,n,mul=1;
	printf("Enter a  ending value to find value is divisible by 3 and 5 :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d",i);
			mul=mul+i;
		} 
	}
	printf("\nTotal multiplication value is = %d",mul);
}
