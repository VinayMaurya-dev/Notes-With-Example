//wap  to count total words present in a string.
#include<stdio.h>
void main()
{
	int i,count=0;
	char sent[100];
	printf(" Please! Enter some line to find total word in this sentence:\n");
	gets(sent);
	for(i=0;sent[i]!='\0';i++)
	{
		if(sent[i]==' ')
		count++;
	}
	printf(" total words present in line = %d",count);
	
}
