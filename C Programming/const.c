// wap to find simple interest value:-
#include<stdio.h>
void main(){
	const int val=100;
	float pa,ra,t,si;
	printf("Enter a principal amount , rate ,time\n");
	scanf("%f%f%f,&pa,&ra,&t");
	si=(pa*ra*t)/val;
	printf("\nTotal simple interest = %f",si);
}
