//5. Write a program to calculate net amount by accepting amount value from user.
// Amount(Rs)                          Discount(%) 
//               ------------------------------------------ 
//Amount>=5000                           10% 
//Otherwise                                      5% 
//             -------------------------------------------

#include<stdio.h>
void main()
{
	int amount,res;
	printf("Enter a  value :\n");
	scanf("%d",&amount);
	if(amount>=5000)
	{
	res=amount-(amount*10/100);
	printf("Total amount is = %d",res);
	}
	else
	{
		res=amount-(amount*5/100);
	printf("Total amount is = %d",res);
	}
	
}

