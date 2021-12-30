//#include<stdio.h>
//1 ,2 ,4, 7 ,11,16,22,.....n

#include<stdio.h>
void main()
{
int i,n=0,m,sum=0;
printf("Enter a  ending value to print series: ");
scanf("%d",&m);
for(i=1;i<=m;i=i+n)
{
n=n+1;
printf("%d\t",i);
sum=sum+i;
}
printf("\nsum = %d",sum);
}



