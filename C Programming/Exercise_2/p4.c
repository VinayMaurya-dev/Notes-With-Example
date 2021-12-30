//wap to find a number is even or odd by using switch.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	switch(num%2==0)
	{
		case 1:
			printf("even");
			break;
		case 0:
			printf("odd");
			break;
	}
}
