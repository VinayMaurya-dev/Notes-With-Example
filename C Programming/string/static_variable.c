#include<stdio.h>
void main()
{
vinay();
vinay();
}
	void vinay()
{
static int a=0;
a=a+10;
printf("The value of a =%d",a);
}

