//wap to input 10 element and search one value is how many 
		//times present in array or not.
//wap to input 10 element and search one value is on which indexing present in array or not .
//wap to input 10 element of array and print 1st present in dex of a value in array.
//wap to input 10 element of array and print last present index of a value in array.
//wap to store 3  subject marks of 5 student and find sum of marks of all students.
//wap to input all element of a 3*3 matrix and print all value in matrix form.
#include<stdio.h>
void main()
{
	int i,j,sub[5],total=0;
	printf("Enter  a 5 subject marks  3 students: \n");
	printf(" 1 student of marks :\n");
	for(i=1;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&sub[j]);
		 total=total+sub[j];	
		} 
		printf("total of subject of marks of sum = %d",total); 
	}
}

