//you can declare a function as a macro
#include<stdio.h>
#define sub(x,y) printf("subtract is =%d\n",(x-y))/printf("Addition is =%d\n",(x+y))/printf("multiply is =%d",(x*y))
void main()
{ 
	//printf("value is =%f",sub(8.4,3.3));
	sub(10,8);
	printf("\nCurrent date is :%s\n",__DATE__);
	printf("Current TIME is :%s\n",__TIME__);
}
