// reverse value
#include<stdio.h>  
 int main()    
{    
int n,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)     
{    			 
m=n%10;         
n=n/10;    	
printf("%d",m);
}       
return 0;  
}   


