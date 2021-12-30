// wap to finf simple intere00st 
//(ask user for the principle amount ,rate, time)
#include<stdio.h>
void main(){
	int pa,ra,t,si;
	printf("Enter a three value for principal amount, rate ,time :");
    scanf("%d%d%d",&pa,&ra,&t);
    printf("simple Interest is = %d",(pa*ra*t)/100);
}
