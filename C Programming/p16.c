//wap to input a number and print "yes it is accepted" when num
//is a positive number and number is completed  divisable by 5.
#include<stdio.h>
void main()
{
	int a ;
	printf("Enter a value for check integer and it is number divided by 5: ");
	scanf("%d",&a);
	(a>=0) && (a%5==0)?printf("yes ! it is accepted."):
	printf("no ! it is not accepted");
}
