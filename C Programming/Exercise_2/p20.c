#include<stdio.h>
void  main()
{
	int marks[3][5],row,col,sum=0;
	for(row=0;row<=2;row++)
	{
		printf("Enter 5 subject marks of students %d :",row+1);
;		for(col=0;col<=4;col++)
		scanf("%d",&marks[row][col]);
	}
	for(col=0;col<=4;col++)
	{
		sum=sum+marks[1][col];
	}
	printf("Total sunbject of marks second student : %d",sum);
}
