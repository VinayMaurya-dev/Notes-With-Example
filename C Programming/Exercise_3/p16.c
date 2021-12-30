//wap to find multiplication of all numbers that is divisible by 3 and 5 both.
//wap to find multiplication of all number where 
//last digit ofnumber is 3 within 1 to n
//wap to find multi of all numbers where last digit of 
// number is divisible by 2 within 1 to n

//wap to count how many numbers are divisible by 3 within 1 to n.
#include<stdio.h>
void main()
{
	int i,n, count=0;
	printf("Enter a value to count total value who divisible by 3: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			count++;
		}
	} 
	printf("Total count value is = %d",count);
 } 
