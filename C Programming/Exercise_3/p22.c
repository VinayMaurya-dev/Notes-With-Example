//reverse
#include<stdio.h>
void main()
{
	int num,rem,res=0;
	printf("Enter a number : ");
	scanf("%d",&num);//12  1
	for(;num>0;num=num/10)
	{
		rem=num%10;//2 1
		res=res*10+rem;
	}
	printf("Reverse value is = %d",res);

}
