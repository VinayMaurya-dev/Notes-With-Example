//wap to convert minutes to the hours and remaining minutes.
#include<stdio.h>
void main(){
	int h,m,min;
	printf("Enter a minutes values to convert hours and minuts:");
	scanf("%d",&m);
	h=m/60;
	min=m%60;
	printf("%d minutes is = %d hours : %d minutes",m,h,min);
}
