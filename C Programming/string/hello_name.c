//wap to input name from user and  print name with hello all username 
//letter should be small case.
#include<stdio.h>
#include<string.h>
void main()
{
 char uname[100];
 printf("Enter User name: ");
 gets(uname);	
 
 printf("Hello ! %s",strlwr(uname));
	
}  
