//wap to find a number is even or odd by using switch.
//#include<stdio.h>
//void main()
//{
//	int num;
//	printf("Enter a number to find number is odd or even :");
//	scanf("%d",&num);
//	switch(num%2==0){
//		case 1:
//			printf("even number");
//			break;
//		case 0:
//		printf("odd number ");	
//	}
//}
//wap to input multiple value from user and find sum of all values untill user inputs
//a negatives value.
//#include<stdio.h>
//void main()
//{
//	int num,sum=0;
//	vinay:
//		if(num<0)
//	goto end;
//
//	printf("Enter a number :");
//	scanf("%d",&num);
//	sum=sum+num;
//	printf("Total sum is = %d\n",sum);
//	goto vinay;
//
//		end:
//		printf("sorry ! you Entered negative value");
//
//}
//wap to input number and print factorial of number untill user input 0 or 1.
//#include<stdio.h>
//void main()
//{
//	int i,num;
//	long fact=1;
//	fact1:
//		fact=1;
//		
//	printf("Enter a number :");
//	scanf("%d",&num);
//	if(num==1||num==0){
//			goto end;
//	}
//	else{
//	
//	for(i=num;i>0;i--)
//	{
//		fact=fact*i;
//	}
//	printf("%d of factorial value is =%ld\n\n",num,fact);
//}
//	fflush(stdin);
//	
//	goto fact1;
//	end:
//		printf("Sorry ! don't Enter 0 or 1");
//}
//wap to find table of all number from 1 to 5

//1 2 3 4 5 6 ...10
//2 4 6 8 ....
//3 6 9 12...
//#include<stdio.h>
//void main()
//{
//	int num,i,res;
//	table:
//	printf("find table 1 to 5 press number :");
//	scanf("%d",&num);
//	if(num>0&&num<6)
//	{
//	for(i=1;i<=10;i++)
//	{
//		res=i*num;
//		printf("%d\n",res);
//	}
//}
//else{
//	printf("Please ! Enter a value 1 t0 5\n");
//	goto end;
//}
//goto table;
//end:
//	printf("###########################");
//	
//}
// wap to find all prime number 1 to 50.
#include<stdio.h>
void main()
{
	int i;
//	printf("Enter a numner to find prime number 1 to n :");
//	scanf("%d",&n);
for(i=1;i<=50;i++)
{
if(i%1==0&&i%)
{
printf("%d",i);
}
}
}
//wap to print only four even within a given series.
//#include<stdio.h>
//void main()
//{
//	 int i,n,count=0;
//	 printf("Enter a starting of series :");
//	 scanf("%d",&i);
//	printf("Enter a starting of series :");
//	 scanf("%d",&n);
//	 for(;i<=n;i++)
//	 {
//	 	if(i%2==0)
//	 	{
//	 		printf("%d\n",i);
//	 		count++;
//		}
//		 if(count==4)
//		 break;
//	 }
//}
//wap to print all even number within a given series only if number is less than 100.
//#include<stdio.h>
//void main()
//{
//	 int i,n;
//	 printf("Enter a starting of series :");
//	 scanf("%d",&i);
//	 printf("Enter a starting of series :");
//	 scanf("%d",&n);
//	 for(;i<=n;i++)
//	 {
//	 	if(i%2==0&&i<100)
//	 	{
//	 		printf("%d\n",i);
//	 	 }
//}
//}
//wap to print only 5 number that is divisible by 3 and 5 both within a given series.
//#include<stdio.h>
//void main()
//{
//	 int i,n,count=0;
//	 printf("Enter a starting of series :");
//	 scanf("%d",&i);
//	 printf("Enter a starting of series :");
//	 scanf("%d",&n);
//	 for(;i<=n;i++)
//	 {
//	 	if(i%3==0&&i%5==0)
//	 	{
//	 		printf("%d\n",i);
//	 		count++;
//	 	 }
//	 	 if(count==5)
//	 	 break;
//}
//}
