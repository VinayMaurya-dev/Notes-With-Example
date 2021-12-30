//wap to find area of circle by using UDF
#include<stdio.h>
void area(int r )
{
	printf("Area of circle is = %.2f",(3.14*r*r));
}
void main()
{
	int n;
	printf("Enter a radius for circle :\n");
	scanf("%d",&n);
	area(n);
}
