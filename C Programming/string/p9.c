//wap to count total words ,character in a sting.
#include<stdio.h>
void main()
{
	char string[100];
	int i,count=0,countch=0;
	printf("Enter a sring to find total words and character:\n");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==' ')
			count++;
		 else
			countch++;
	}
	printf("Total words = %d and total Character = %d",count,countch);
	
}
