#include<stdio.h>
void main()
{
	int arr[10],i,j,temp;
	printf("Enter a 10 number :\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}	
	}
	printf("accending order :\n");
	for(i=0;i<=9;i++)
		printf("%d\t",arr[i]);
}

