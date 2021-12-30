//wap to print sort form of your name like
//i/p vinay maurya o/p v.maurya
#include<stdio.h>
void main()
{
	char name[100];
	int i,j;
	printf("Enter  your name to get sort form of Your name :\n");
	gets(name);
	printf("Sort Name : %c.",name[0]);
	for(i=1;name[i]!='\0';i++)
	{
	 if(name[i]==' '&&name[i]=='\0')
	 {
	 	printf("%c.",name[i+1]);
	 }
	 else if(name[i]==' '&&name[i]!='\0')
	 {
	 	for(j=1;name[j]!='\0';j++)
	 	{
	 		printf("%c",name[j]);
		 }
	 }	
	}
}
