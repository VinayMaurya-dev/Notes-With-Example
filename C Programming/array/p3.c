
#include<stdio.h>
void main()
{
	int i,j,num[10];
	printf("Enter a 10 element :\n");
	for(i=0;i<10;i++)
	scanf("%d",&num[i]);
	printf("Unique array is:\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		if(num[i]==num[j])
		break;
		}
		if(i==j)
		{
		printf("%d\t",num[i]);
		}
	} 
}

