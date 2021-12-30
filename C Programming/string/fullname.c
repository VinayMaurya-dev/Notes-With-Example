//wap to input first name and last name of user and print fulll name.
#include<stdio.h>
#include<string.h>
void main()
{
	char fname[100],lname[100];
	printf("Enter First name : ");
	gets(fname);
	printf("Enter last name : ");
	gets(lname);
	strcat(fname,lname);
	printf("Your fullname: %s",fname);
	
}
