////Wap to ask to input gender first character (m/f)
//From 10 user and count how many female and how many male are present here.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i ,countm,countf;
	char gen;
	printf("Enter a 10 gendar name : \n");
	for(i=1;i<=10;i++)
	{
		gen=getche();
		if(gen=='m')
		{
			countm++;
		}
		else if(gen=='f')
		{
			countf++;
		}	
		
	}
	printf("Total male = %d and Total female = %d",countm,countf);
}
