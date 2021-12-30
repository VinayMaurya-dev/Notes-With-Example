//11. Write a program to check whether the given character is lowercase alphabet or not.
#include<stdio.h> 
void main()
{
	char ch;
	printf("Enter a character value :\n ");
	ch=getche();
	if(ch>='a'&& ch<='z')
	{
		printf("\ncharacter is lowercase");
	}
	else {
		printf("\nCharacter is Uppercase.");
	}
}

