//wap to count total words present in array
#include<stdio.h>
void main()
{
	char name[20];
	int i,count=0;
	printf("Enter your name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			count++;
		}
	} 
	printf("Total %d time words is present in string ",count+1);
	
}
