//wap to print reverse of your name
#include<stdio.h>
void main()
{
	int i;
	char st[40];
	printf("Enter Yourname:");
	gets(st);
	i=0;
	while(st[i]!='\0')
	{
		printf("%c\n",st[i]);
		i++;
	}
}
