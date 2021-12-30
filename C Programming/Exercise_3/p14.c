//26. Write a program to check whether the given number is  
//      Palindrome or not.
//111 121 101 
#include<stdio.h>
void main()
{
	int n,c,m,sum=0,temp;
	printf("Enter a number  to check the given number is palindrome or not: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		c=n%10;
		sum=(sum*10)+c;
 		n=n/10;	
	}

	 if(temp==sum)
	 {
	 	printf("The given number is palindrome : ");
	 }
	 else
	 {
	 	printf("The given number is  not palindrome : ");
	 }
}
//
//101
//101>0
//101%10
//101/10=10
