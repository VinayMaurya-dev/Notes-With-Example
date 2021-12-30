#include<stdio.h>
/*void main()
{
printf("\nlength  of string = %d",printf("Vinay101"));
}*/

 int add2number()
{
	int a,b,result;
	printf("Enter a 2 value  :");
	scanf("%d%d",&a,&b);
	result=a+b;
	return result;

}
int add3number()
{
	int c,result2;
	printf("Enter 3rd value :");
	scanf("%d",&c);
	result2=add2number()+c;
	return result2;
 } 
 void main()
 {
 	int choice;

  	printf("how many number to print addtition 2 or 3:");
 	scanf("%d",&choice);
 	switch(choice)
    	{
 	case 2:
 		printf(" Two number addition is = %d",add2number());
 		 	break;
 	case 3: 
	 	 	printf(" Three number addition is = %d",add3number());
	 	 	break;
	default:
	printf("Sorry ! Please Enter only 2 or 3");		  	
}
	
 }
