//wap to find minimun number wuthin 10 element of array by using UDF.
#include<stdio.h>
int minValue(int arr[])
{
	int i,min;
	min=arr[0];
	for(i=0;i<=9;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}
int main()
{
	int a[10],i;
	printf("Enter 10 Element of Array : ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
i=minValue(a);
printf("Minimum value of array is = %d",i);	
}

