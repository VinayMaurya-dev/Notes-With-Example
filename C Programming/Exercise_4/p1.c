#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a three value to find maximum value in the given number :\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("Maximum number  is =%d",a);
}
else if(b>c)
{

printf("Maximum value is  =%d",b);
}
else
{
printf("Maximum value is =%d",c);
}
}

