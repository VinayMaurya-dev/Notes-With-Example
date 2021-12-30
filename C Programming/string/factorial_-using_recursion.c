//wap to find factorial by using resursion
#include<stdio.h>
void main()
{
	int res,n;
	printf("Enter a value to find factorial :");
	scanf("%d",&n);
	res=getfact(n);
	printf(" factorial value of %d is= %d",n,res);
}
 int getfact( int n)
 {
  if(n==1)
  return 1;
  else
  return n*getfact(n-1);	
 }
