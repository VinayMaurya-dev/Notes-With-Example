//wap to get NCR value of a number by  using UDF
//NCR=fact of n /(fact of r * fact of (n-r))
//int getFact(int num) 
#include<stdio.h>
int getFact(n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int FindNCR(num,r)
{
	int a,b,c;
	float res;
	a=getFact(num);
	b=getFact(r);
	c=getFact(num-r);
	res=a/(b*c);
	return res;
}
void main()
{ 	
	int num ,r;
	float ncr;
	printf("This Program is  to find  NCR value\n");
	printf("Enter a value of n :");
	scanf("%d",&num);
	printf("Enter a value of r:");
	scanf("%d",&r);
	printf("Formula is :n!/(r!*(n-r)!");
		ncr=FindNCR(num,r);
		printf("\nNCR value is %.2f",ncr);
}
