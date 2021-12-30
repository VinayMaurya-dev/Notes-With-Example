//wap to print cube of a number only is number is positive
#include<stdio.h>
void main(){
	
	int num ,cube;
	printf("Enter a numner to find value of cube : ");
	scanf("%d",&num);
	if(num>0){
	 cube=num*num*num;
	 printf("Cube value of %d is = %d",num,cube);
	}
} 
