//wap when ending of loop in not given.
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number to print value 1 to n :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
}
//wap to print even value from 1 to n
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number to print value 1 to n :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		 if(i%2==0)
		 {
		 	printf("%d\t",i);
		 }
	}
}
//wap to prin all odd number from 10 to n
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number to print value 1 to n :- ");
	scanf("%d",&n);
	for(i=10;i<=n;i++)
	{
		 if(i%2!=0)
		 {
		 	printf("%d\t",i);
		 }
	}
}
//Wap to print all digit which is divisible by 4 from 1  to n 
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number to print value 1 to n :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		 if(i%4==0)
		 {
		 	printf("%d\t",i);
		 }
	}
}
//wap to print following
//1 ,2 ,4, 7 ,11,16,22,.....n 
 
