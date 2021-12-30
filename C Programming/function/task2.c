//wap with  following UDF
//void checkPolindrome(int num)
/*#include<stdio.h>
checkpolindrome(int num)
{
	int rem,sum=0,temp;
	temp=num;
	while(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
}
if(sum==temp)
{
	printf("Yes ! given number is Polindrome.");
}
	else
	printf("Sorry !given numner is not Polindrome");
}
void main()
{
	int n;
	printf("Enter a number to check number is polindrome or not:");
	scanf("%d",&n);
	checkpolindrome(n);
}*/

//int checkPolindrome(int num)//return 0 if polindrome and 1 if not polindrom
#include<stdio.h>
 int checkpolindrome(n)
{
int rem,sum=0,temp;
	temp=n;
	while(n)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
}
if(sum==temp)
{
	return 0;
}
	else
	return 1;
}	
void main()
{
	int val,res;
	printf("Enter  a value to check given number is polindrome or Not: ");
	scanf("%d",&val);
	res=checkpolindrome(val);
	if(res==0)
	printf("yes ! given  number is polindrome");
	else
	printf("Sorry ! given  number  is not polindrome");

}
//wap to get NCR value of a number by  using UDF
//NCR=fact of n /(fact of r * fact of (n-r))
//int getFact(int num) 
/*#include<stdio.h>
int getFact(n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
void FindNCR(num,r)
{
	int a,b,c;
	float res;
	a=getFact(num);
	b=getFact(r);
	c=getFact(num-r);
	res=a/(b*c);
	printf("\nNCR value is %.2f",res);
}
void main()
{ 	
	int num ,r;
	printf("This Program is  to find  NCR value\n");
	printf("Enter a value of n :");
	scanf("%d",&num);
	printf("Enter a value of R:");
	scanf("%d",&r);
	printf("Formula is :n!/(r!*(n-r)!)");
		FindNCR(num,r);
}*/
/*wap to convert rupess to paisa
//void convert()
/*#include<stdio.h>
void convert()
{
	float r;
	int p;
	printf("Enter rupess value to convert paisa :\n");
	scanf("%f",&r);
	p=r*100;
	printf("%.2f rupess is = %d paisa",r,p);
}
void main()
{
	convert();
}
*///int convert()
/*#include<stdio.h>
int convert()
{
	float r;
	int p;
	printf("Enter rupess value to convert paisa :\n");
	scanf("%f",&r);
	p=r*100;
	return p;
}
void main()
{
	int paisa;
	paisa=convert();
	printf("Total paisa = %d",paisa);
}
*/
//int convert(float rupee)
/*#include<stdio.h>
int convert(float rupee)
{ 		
		int p;
	 	p=rupee*100;
		return p;
}
void main()
{
	float rupee;
	 int paisa;
	printf("enter a rupee:");
	scanf("%f",&rupee);
	paisa=convert(rupee);
	printf("Total paisa = %d",paisa);

}*/

//void convert(float rupee)
/*#include<stdio.h>
void convert(float rupee)
{ 		
		int p;
	 	p=rupee*100;
		printf("Total paisa = %d",p);
}
void main()
{
	float rupee;
	printf("enter a rupee:");
	scanf("%f",&rupee);
	convert(rupee);

}
*/
/*// wap to arrange of array in ascending Order.
/*void arrangeArray(int arr[]) */
/*include<stdio.h>
void arrangeArray(int arr[])
{ 
	int i,j,temp=0;
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Ascending Order Array .....\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\t",arrc[i]);
	}
}
void main()
{
	int arr[10],i;
	printf("Enter a 10 value:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	arrangeArray(arr);
}*/
