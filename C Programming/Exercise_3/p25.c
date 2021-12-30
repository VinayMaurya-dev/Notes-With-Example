//wap to find multiplication of all numbers that is divisible by 3 and 5 both.
#include<stdio.h>
void main()
{
	int i,num,mul=1;
	printf("Enter a ending number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d\t",i);
			mul=mul*i;
		}
	}
	printf("\nmultiplication is = %d",mul);
}
