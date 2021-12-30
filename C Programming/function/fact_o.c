//4.// wap to ncrvalue  usingudf.
#include<stdio.h>
int fact(int n)
{
 int i,f=1;
for(i=1;i<=n;i++)
    {
	f=f*i;
	}
	return f;
}
void main()
{
	int n ,r;
	float ncr;
	printf("\n Enter  the  n number: ");
	scanf("%d",&n);
	printf("\n Enter  the  r number: ");
	scanf("%d",&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
printf("value of %dC%d:%.2f\n",n,r,ncr);
}

