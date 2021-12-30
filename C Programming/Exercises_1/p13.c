#include<stdio.h>>
void main()
{
vinay();
vinay();	
vinay();
}
vinay()
{
	
	int a;
	printf("Enter a percentage value \n");
	scanf("%d",&a);
	if(a>=0&&a<=10)
	{
		printf("You're  failed\n");
	}
	else if(a>=11&&a<=39)
	{
	printf("\nYou are third division ");
	}
	else if (a>40&&a<=59)
	{
		printf("\nYou are second division \n");
	}
	else if(a>60&&a<=100)
	{
		printf("\nYou are first division\n ");
	}
  else
  { 
  printf("sorry ! try again later.");
	  }	
}

	

