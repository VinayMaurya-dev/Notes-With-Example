#include<stdio.h>
#include<conio.h>
void main()
{
	int i ,pos=0,neg=0,zero=0,num;
	printf("Enter a 10  number : \n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num);
		if(num>0)
		{
			pos++;
		}
		else if(num<0)
		{
			neg++;
		}	
		else
		{
		 zero++;
		}
	}
		printf("Total pos = %d and Total neg = %d and zero = %d",pos,neg,zero);
}









