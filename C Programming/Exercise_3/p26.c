//wap to find multiplication of all number where
// last digit of number is 3 within 1 to n
#include<stdio.h>
void main()
{
	int i,num,mul=1;
	printf("Enter a ending number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%10==3)
		{
			printf("%d\t",i);
			mul=mul*i;
		}
	}
	printf("\nmultiplication is = %d",mul);
}
