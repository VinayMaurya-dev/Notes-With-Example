//	Wap to input a character and print 
//character in uppercase if the inputed value is a alphabet and in lowercase. 
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a lowercase character :\n");
	ch=getche();
	if(ch>='a'&& ch<='z' ||ch>='A'&&ch<='Z')
	{
		if(ch>='a'&& ch<='z'){
			ch=ch-32;
			printf("\nCharacter is in uppercase : %c",ch);
		}
		else
		{
				printf("\nCharacter is in a Uppercase");
		}
	}
	else
	{
		printf("\nSorry !  You are not entering a characher value");
	}
}
