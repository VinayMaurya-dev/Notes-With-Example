//wap to check string is polindrome or not.
#include<Stdio.h>
#include<string.h>
void main()
{
	char name[100],rev[100];
	int res;
	printf("Enter a string:");
	gets(name);
	strcpy(rev,name);
	rev[100]=strrev(name);
	res=strcmp(name,rev);
	if(res==0)
	printf("string is polindrome");
	else
	printf("string is not polindrome");
	 
}
