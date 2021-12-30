//wap to enter Your name and should be greater than 3 characters.
#include<stdio.h>
void main()
{
	char name[100];
	int len;
	printf("enter Your name: ");
	gets(name);
	len=strlen(name);
	printf("Total character in string :%d",len);
	if(len<3)
	{
		printf("\n name should have atleast 3 character");
	}
	else
	printf("\nYour name is :%s",name
	);
}
