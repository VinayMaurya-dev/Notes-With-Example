//wap  to print memory location of a variable.
#include<stdio.h>
void main()
{
	int i=5;
	printf("\n memory address of variable is %d",&i);
	printf("\n value at a  variable is %d",*(&i));

}
