//wap to input password from user and print "Your Welcome" is password is Techpile
#include<stdio.h>
void main()
{
	char pass[100];
	int res;
	printf("Enter Your Password:");
	gets(pass);
	res=strcmp(pass,"techpile");
	if(res==0)
	{
		printf("Your Welcome");
	}
	else
	printf("Password Wrong");
	
 } 
