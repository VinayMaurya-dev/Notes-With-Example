// wap to input total fee of your  gradution  and there is 10% discount if fee is greater than
//20000 and there is 20% discount if fee is less than 2000.calculate the total fee after discount.
#include<stdio.h>
void main()
{
	int total_fee,discount_fee;
	printf("Enter a total fee for doing graduation : ");
	scanf("%d",&total_fee);
	discount_fee=total_fee>20000?10:20;
	printf("Your discounted fee : %d percent %\n",discount_fee);
	
	printf(" \nYour Discounted  fee is : %d /-",(total_fee*discount_fee)/100);
	
	printf(" \n\n Discounted Total fee is : %d /-",total_fee-(total_fee*discount_fee)/100);
	
}
