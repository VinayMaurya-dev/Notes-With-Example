// wap to input username and passworgd from  user and print a message
// "wellcome To Techpile" is username is "techpileuser" and password is "techpile"
#include<stdio.h>
#include<string.h>
void main()
{
	char uname[100],pass[100];
	printf("Enter username: ");
	gets(uname);
	printf("Enter Password: ");
	gets(pass);
	if((strcmpi("techpileuser",uname)&& strcmpi("password",pass))==0)
	printf("Wellcome To Techpile");
	else
	printf("Wrong Username Or password");
}

