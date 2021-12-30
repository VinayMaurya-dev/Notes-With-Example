//armstrong number
#include<stdio.h>
void main()
{
	
	int sum,num,rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(;num>0;num=num/10)
	{
		rem=num%10;
		sum=rem*rem*rem;
		printf("%d\n",sum);
	}
}
