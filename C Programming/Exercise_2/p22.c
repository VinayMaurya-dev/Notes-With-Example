//1.	wap to input 10 element and find sum of  all.
//#include<stdio.h>
//void main()
//{
//	int i,n[10],sum=0;
//	printf("Enter a 10 Element of array :");
//	for(i=0;i<=9;i++)
//	{
//		scanf("%d",&n[i]);
//		sum=sum+n[i];
//	}
//	printf("Total 10 number of sum = %d",sum);
//}
//2. wap to find greatest number within 10 element of array.
/*#include<stdio.h>
int main()
{
	int i,larg,temp;
	int n[10],j;
	printf("Enter a 10 number for array :\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&n[i]);
	}
	larg=n[0];
	for(i=1;i<=9;i++)
	{
		  if(larg<n[i]);
		  larg=n[i];
		  //n[i]=temp;
    }
    printf("%d is a greater ",n[i]);
    return 0;
}*/

//3.wap to find smallest number within 10 element.
#include<stdio.h>
void main()
{
	int i,sm=1,n[10];
	printf("Enter a 10 number :\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&n[i]);
	} 
	sm=n[0];
	for(i=i;i<=9;i++)
	{
		if(n[i]<sm)
		{
			sm=n[i];
		}
	}
	printf("smallest value is =%d",sm);
}

//4. wap  to input 10 element and arrage value in descending order.
//5.wap to input 10 element and arrage value in ascending order.
/*#include<stdio.h>
void main()
{
	int i,j,arr[10],temp;
	printf("Enter a 10 number :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}	
	}
	printf("accending order :\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
}*/
//6.wap to input 10 element and check a given  value is present array or not.
//#include<stdio.h>
//void main()
//{
//	int arr[10],i,n1;
//	printf("Enter a 10 value to array :\n");
//	for(i=0;i<=9;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("Enter a value to check number is present in array or not:\n");
//	scanf("%d",&n1);
//	for(i=0;i<=9;i++)
//	{
//		if(arr[i]==n1)
//		{
//		printf("matched number is = %d",arr[i]);	
//			break;
//		}
////	 	else
////		printf("This  number is not present in array !");
//	}
// 	}

//7.wap to input 10 element of array and print only unique elements of array.
//#include<stdio.h>
//void main()
//{
//	int i,j,num[10];
//	printf("Enter a 10 element :\n");
//	for(i=0;i<10;i++)
//		scanf("%d",&num[i]);
//	printf("Unique array is:\n");
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//		if(num[i]==num[j])
//		break;
//		
//	}
//	if(i==j)
//		{
//		printf("%d",num[j]);
//		}
//	} 
//}
//8.wap to input 10 element of array and count a given value is how many times present in array.
//9.wap to input 10 element and find sum of two sequential elements.

//10.wap to input 10 elements on two array and find sum of both arrays. 
/*#include<stdio.h>
void main()
{
	int n1[10],n2[10],i,sum[10];
	printf("Enter A first 10 number :\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&n1[i]);
	}
	printf("\nEnter A second 10 number :\n");
	for(i=0;i<=9;i++)
	{   
		scanf("%d",&n2[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum[i]=n1[i]+n2[i];
	}
	printf("Toral sum of array is :\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",sum[i]);
	}
}
*///11. wap to input 10 element of array and check 
//a given value is how many times present in array and on
//which position.
/*#include<stdio.h>
void main()
{
int	val[10],i,j,count=0;
	printf("Enter 10 element :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&val[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			if(val[i]==val[j])
			count++;
		}
		if(i==j)
		printf("%d is %d time\n ",val[i],count);
	}
}*/
