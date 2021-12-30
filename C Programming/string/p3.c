//wap to count total occreance of 'a' in your name
#include<stdio.h>
void main()
{
	char name[20];
	int i,count=0;
	printf("Enter your name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a'||name[i]=='A')
		{
			count++;
		}
	} 
	printf("Total %d time 'a' is present in string ",count);
	
}
