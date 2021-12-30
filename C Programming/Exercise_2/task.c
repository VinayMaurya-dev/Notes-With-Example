//wap to find all prime number from 1 to 50.
//#include<stdio.h>
//void main()
//{
//int i,num,count,ct;
//for(num=2;num<=50;num++)
//{
//	count=0;
//for(i=1;i<=num;i++)
//{
//	if(num%i==0)
//	count++;
//}
//	if(count==2)
//	{
//		ct=ct+1;
//	printf(" prime number : %d\n",num);
//}
//
//}
//printf("%d",ct);
//}
//wap to find table from 2 to 10
//#include<stdio.h>
//void main()
//{
//	int i,j;
//	for(i=2;i<=10;i++)
//	{
//		for(j=1;j<=10;j++)
//		{
//		printf("%d\t",i*j);
//	}
//	printf("\n");
//}
//}
//wap to input 5 digits from user and count how many digit are polindrome.
#include<stdio.h>
void main()
{
	int a[5],i,rem,sum=0,temp;
	printf("Enter 5 number to check number is polindrome or not ...");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	temp=a[i];	
		while(a[i]>0)
		{
			rem=a[i]%10;
			sum=sum*10+rem;
			a[i]/10;
		}
		if(temp==sum)
		printf("%d is a polindrome \n",a[i]);
		else
		printf("%d is not polindrome\n",a[i]);
	}
}
//wap to count all prime number within 1 to given number.
//#include<stdio.h>
//void main()
//{
//	int i,j,num,total=0,count;
//	printf("Enter a number to check how many number are prime from 1 to n: ");
//	scanf("%d",&num);
//	for(i=2;i<=num;i++)//20
//	{
//		count=0;
//		for(j=1;j<=i;j++)//5
//		{
//			if(i%j==0)
//			{
//				count++;
//				
//			}
//		}
//		if(count==2)
//			total=total+1;
//		
//	}
//	printf("Total prime number 1 to %d is = %d",num,total);
//	
//}
//wap to input 5 sunject marks 3 student and print division of all.
//#include<stdio.h>
//void main()
//{
//	int i,j,sub[5],total=0;
//	printf("Enter  a 5 subject marks  3 students: \n");
//	printf(" 1 student of marks :\n");
//	for(i=1;i<=3;i++)
//	{
//		for(j=0;j<=4;j++)
//		{
//			scanf("%d",&sub[j]);
//		 total=total+sub[j];
	
//		}
//		if(total>=33)
//		printf("student pass\n");
//		else 
//		printf("student fail\n");
//		 printf("%d student of marks : \n",i+1);
//		
//	}
//}

