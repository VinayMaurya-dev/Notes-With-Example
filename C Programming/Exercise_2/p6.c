#include<stdio.h>
void main()
{
	int n,i,fact=1;
	printf("Enter a number :");
	scanf("%d",&n);
	if(n>0)
	{
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
else{
	printf("%d",0);
}
}
