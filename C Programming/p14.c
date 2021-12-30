//wap to input m for male  and f  for female and print the gender like male or female
#include<stdio.h>
#include<conio.h>
void main()
{
	char gen;
	printf("Enter  a single characher  like m or f :");
	gen=getche();
	gen=='m'?printf("\n Your are a male"):
	(gen=='f'?printf("\n your are a female"):
	printf("\nPlease ! Enter a valid characher"));
}
