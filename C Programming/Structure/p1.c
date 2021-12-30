#include<stdio.h>
struct student// global structure
{
	int rollno;
	char name[20];
}s1;
void main()
{
	printf("Please ! Enter roll_no and name of dirst student : ");
	scanf("%d",&s1.rollno);
	fflush(stdin);
	printf("Enter Your name: ");
	gets(s1.name);
	s1.rollno=s1.rollno+10;
	printf("roll_no = %d and name = %s",s1.rollno,s1.name);
	
}
