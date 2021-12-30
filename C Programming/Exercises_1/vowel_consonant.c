//wap to input a character and check character is alfhabet or not if character is
//alfhabet then chech vowel or consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
	char val;
	printf("Enter a character:\n");
	val=getche();
	if(val>='a'&&val<='z'||val>='A'&&val<='Z')
	
	{
			
		if(val=='a'|| val=='e'|| val=='i'|| val=='o'||
		val=='u'||val=='A'||val=='E'||val=='I'||val=='O'|| val=='U')
		{
			printf("\nYes ! This value is vowel character");
		}
		else
		{
				printf("\nYes ! This value is Consonant character");
		}
	}
	else
	{
		printf("\nSorry ! you are not Entering a characher value");
	}
	
}
