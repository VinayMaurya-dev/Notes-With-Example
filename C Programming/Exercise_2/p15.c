//wap to store 5 subject marks of a student and find  total marks.by using array ?
#include<stdio.h>
void main()
{
	int vinay[5],i,total=0;
	printf("Enter a 5 subject marks of student..\n");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&vinay[i]);
		total=total+vinay[i];
	}
	
	printf("Total marks is = %d",total);
}

