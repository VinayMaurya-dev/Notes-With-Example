// wap to factorial with  UDF 
#include<stdio.h>
 void fact(n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial  of %d is = %d",n,f);
}
void main()
{
	int n;
	printf("Enter a value to find factorial :\n");
	scanf("%d",&n);
	fact(n);
}

