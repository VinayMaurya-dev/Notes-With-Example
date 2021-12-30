
//acending order.....
#include<stdio.h>
void main()
{
	int n[10],i,j,temp;
		printf("Enter a 10 number :\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
			if(n[j]<n[i])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	printf("Acending Order....\n ");
	for(i=0;i<=9;i++)
	printf("%d\t",n[i]);
}
