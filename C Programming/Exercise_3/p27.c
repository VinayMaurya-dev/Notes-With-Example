//wap to find multiplication of all numbers where 
//last digit of  number is divisible by 2 within 1 to n.
#include<stdio.h>
void main()
{
	int i,num;
	long mul=1;
	printf("Enter a ending number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%10==0||i%10==2||i%10==4|| i%10==6||i%10==8 )
		{
			printf("%d\t",i);
			mul=mul*i;
		}
	}
	printf("\nmultiplication is = %ld",mul);
}

