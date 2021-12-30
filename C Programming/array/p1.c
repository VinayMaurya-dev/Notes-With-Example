//decending order......
#include<stdio.h>
void main()
{ int  num[10],i,j,temp;
	printf("Enter a 10 value :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(num[j]>num[i])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("decending order :\n");
	for(i=0;i<=9;i++)
	printf("%d\t",num[i]);
}
