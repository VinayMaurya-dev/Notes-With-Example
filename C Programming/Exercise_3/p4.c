//	Write a program to find sum of  n given  numbers.
//258=15
#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    // 215 21  2
{    			//
m=n%10;    		//5	  1	  
sum=sum+m;    //0+5=5  6  8
n=n/10;    	//21  2
}    
printf("Sum is=%d",sum);    
return 0;  
}   
