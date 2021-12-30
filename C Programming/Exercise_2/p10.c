#include<stdio.h>
void main()
{
	int i=1;
	for(;;)
	{
		if(i<=60)
		{
			printf("%d",i);
			i++;
		printf("one minute completed.");		
		for(;;)
		{
			if(i<=60)
			{
			printf("%d\n",i);
			i++;
		
		}
		printf("one hours completed.");	
		}
	} 
}
}
