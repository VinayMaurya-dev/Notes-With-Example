// wap to input 10 student name and age and print 
//student is eligible to voting or not with name
#include<stdio.h>
#include<stdlib.h>
struct vote{
	int age;
	char name[20];
	
};
void main()
{
	struct vote s[3];
	int i;
	for(i=0;i<=2;i++)
	{
		printf("Enter age of %d student :",i+1);
		scanf("%d",&s[i].age);	
		printf("Enter name of %d student :",i+1);
		fflush(stdin);
		gets(s[i].name);
	}
	for(i=0;i<=2;i++)
	{
		if(s[i].age>=18)
		printf("%s is eligible for voting\n",s[i].name);
	}
}
