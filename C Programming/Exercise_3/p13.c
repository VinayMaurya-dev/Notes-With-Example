// wap to add even number within n to 50
#include<stdio.h>
void main()
{
	
	int i ,n,add=0;
	printf("Enter a number 1 to n : ");
	scanf("%d0",&n);
	for(i=n;i<=50;i++)
	{
	 if(i%2==0)
	 {
	 	printf("%d\t",i);
	 	add=add+i;
	 }
    }
    printf("\nTotal added even number %d",add);
}
