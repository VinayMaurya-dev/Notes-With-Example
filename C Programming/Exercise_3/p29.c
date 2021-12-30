////wap to print  each digit of a number.
#include<stdio.h>
void main(){
	int i,num,res;
	printf("Enter a  number : ");
	scanf("%d",&num);
	for(;num>0;num=num/10)
	{
		res=num%10;
		printf("%d\n",res);
	}
}
