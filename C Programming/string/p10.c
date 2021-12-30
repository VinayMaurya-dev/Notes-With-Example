//wap to print length of string without  using pre-defined space.
#include<stdio.h>
void main()
{
	char name[100];
	int i,count=0;
	printf("Enter a  Your name :\n");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			
		}
		else
		{
			count++;
		}
	}
	printf("Total Characher value is = %d",count);
	
}
