// wap to check a person eligible for HR or not only female are allowed.
#include<stdio.h>
void main(){
	char gen;
	printf("Enter if you're a male press m and female for f :- ");
	gen=getche();
	if(gen=='f')
	{
	printf("\nyes ! you are eligible for HR ");	
	}
	
	if(gen!='f'){
	printf("\nSorry ! you are not eligible for HR ");
		
	}
	
}
