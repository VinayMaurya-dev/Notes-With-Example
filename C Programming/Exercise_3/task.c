//wap to print all number of a series by using Udf

//void series()
/*#include<stdio.h>
void series()
{
	int i,n;
	printf("Enter a number :\n");
	scanf("%d",&n);
	printf("All number of a series :\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
	
}
void main()
	{
		series();
	}
//void series(int start int end)*/
/*#include<stdio.h>
void series(int start ,int end)
{    int i;
printf("~~~~~~~~~~~~~~~~~\n");
	for(i=start;i<=end;i++)
	{
		printf("%d\t",i);
	}
}
void main()
{
	int st,end;
	printf("print All number start to end:\n");
	printf("Enter starting value :\n");
	scanf("%d",&st);
	printf("Enter end value :\n");
	scanf("%d",&end);
	series(st,end);
}*/
///wap to count all even number within a series.

//void series()
/*#include<stdio.h>
void series()
{
	int n,i,count=0;
	printf("Enter a last number :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 if(i%2==0)
	 count++;	
	}
	printf("Total even number is =%d",count);
}
void main()
{
	series();
}
*/
//void series(int start int end)
/*#include<stdio.h>
void series(int start ,int end)
{
	int i,count=0;
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		count++;
	}
	printf("Total even number is = %d",count);
}
void main()
{
	int st,end;
	printf("This is for count total even number..\n");
	printf("Enter  starting value :");
	scanf("%d",&st);
	printf("Enter a end value :");
	scanf("%d",&end);
	series(st,end);
}*/

//wap with  UDF to add two integer value and  second to add two float value

//void add(int a,int b)
/*#include<stdio.h>
void add(int a,int b)
{
	printf("Addition of 2 number is :%d",a+b);
}
void main()
{
	int a ,b;
	printf("Enter a 2 int value :\n");
	scanf("%d%d",&a,&b);
	add(a,b);
}*/
//void fadd(float a#include<stdio.h>
#include<stdio.h>
void add(float a,float b)
{
	printf("Addition of 2 number is :%f",a+b);
}
void main()
{
	float a ,b;
	printf("Enter a 2  float value :\n");
	scanf("%f%f",&a,&b);
	add(a,b);
} 
