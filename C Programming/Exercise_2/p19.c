//wap to input all element of a 3*3 matrix and print all value in matrix from 
#include<stdio.h>
void main()
{
int	
 mat[3][3],i,j;
 printf("Enter a 9 number :\n ");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		scanf("%d",&mat[i][j]);
	}
}
printf("matrix is :\n");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		printf("%d\t",mat[i][j]);
	}
	printf("\n");
}

}
