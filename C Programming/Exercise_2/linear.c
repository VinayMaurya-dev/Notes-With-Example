//wap to search an element in the given list of n number  using linear search.
#include<stdio.h>
void main()
{
	int size,num[100],val,i,count=0;
	printf("Enter a array size :");
	scanf("%d",&size);
	printf("Enter a %d value\n",size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&num[i]);
	}
	//search  a given value in array.....
	printf("Enter a value to search in array :\n");
	scanf("%d",&val);
	for(i=0;i<size;i++)
	{
		if(num[i]==val)
		{
		count++;	
		}
		
	}
	if(count>0)
	{
		printf("Yes given value is present in array..");
	}
	else
	{
	printf("Sorry ! given value is not present in array");	
	}
	
}								
