/*8.wap to input 10 element of array and
 count a given value is how many times present in array.
*/
#include<stdio.h>
void main()
{
	int num[10],i,val,count=0;
	printf("Enter a 10 element:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter a value to find how many time's present in array: \n");
	scanf("%d",&val);
	for(i=0;i<=9;i++)
	{
		if(num[i]==val)
		{
			count++;
		}
	}
	printf("%d present in array %d times.",val,count);
}
