//wap to input first name and last name of the user and print full name 
//where first name is in uppercase and last name is in lowercase.
#include<stdio.h>
void main()
{
	char fname[100],lname[100];
	printf("Enter first name:");
	gets(fname);
	printf("Enter last name:");
	gets(lname);
	strupr(lname);
	strlwr(fname);
	strcat(fname,lname);
	printf("Your full name is : %s ",fname);
  }  
