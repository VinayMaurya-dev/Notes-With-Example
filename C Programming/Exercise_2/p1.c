// wap to input a 2 digit number and print tens digit and once digit. 
//#include<stdio.h> 
//void main()
//{
//	int num,rem,count=0;
//	printf("Enter a number only 2 digits. : ");
//	scanf("%d",&num);
//	while(num>0)
//	{
//		rem=num%10; 
//			count++;
//			 switch(count)
//			 {
//			 	case 1:
//			 	printf("%d is a place of 1 digit\n",rem);
//			 	break;
//			 	case 2:
//			 	printf("\n%d is a place of 10 digit\n",rem);
//			 	break;
//			 	default:
//			 		printf("\nplease enter only 2 digits ");
//			 		break;
//			 }
//		num=num/10;
//	}
//	
//}
// wap to remove all 0 from a number.
//#include<stdio.h>
//void main()
//{
//	int num,temp,rem,sum=0,r,result=0;
//	printf("Enter a number :");
//	scanf("%d",&num);
//	while(num>0)
//	{
//		rem=num%10;
//		if(rem==0)
//		{
//			
//		}
//		else{
//			sum=sum*10+rem;
//		}
//		
//	
//		num=num/10;
//	}
////	printf("reverse : %d",sum);	
//	temp=sum;
//	while(temp>0)
//	{
//		r=temp%10;
//		 result=result*10+r;
//		
//		temp=temp/10;
//	}
//	printf("\n\nRemove all 0 digit then number is = %d",result);
//}

//wap to  input two number from while user choice is 1 and print sum of all numbers.
#include<stdio.h>
void main()
{
 float x,y,sum;
    char ch;

    do{
    printf ("Enter the first number:");
    scanf ("%f",&x);
    printf ("Enter the second number:");
    scanf ("%f",&y);
    sum=x+y;
      printf ("The total number is:%.1f",sum);
    printf ("\n\nDo you want to continue: y/n :");
    scanf (" %c", &ch);
    } 
	while(ch == 'y'); 
	}

//}

