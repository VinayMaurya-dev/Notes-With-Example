// 7. Write a program to evaluate student result by reading
// marks in three subjects from user.
//(Pass or Fail) :
#include<stdio.h>
void main()
{
	int m,p,b,res;
	printf("Enter a number in mathmatic : \n");
	scanf("%d",&m);
		printf("Enter a number in Physics : \n");
	scanf("%d",&p);
		printf("Enter a number in Biology : \n");
	scanf("%d",&b);
	res=m+p+b;
	if(res>0&&res<50)
	printf("You're fail ");
	else
	{
		printf("Weldone ! You're ");
		
	}
}
