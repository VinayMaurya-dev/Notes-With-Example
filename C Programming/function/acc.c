//3.// wap to ascendendingby  usingudf.
#include<stdio.h>
void ascen(int a[])
{
int i,j,temp=0;
for(i=0;i<=9;i++)
    {
	for(j=i+1;j<=9;j++)
	{		
	if(a[j]<a[i])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
    }
}
printf("Asdcending Array ........\n");
for(i=0;i<10;i++)
{
	printf("%d\t",a[i]);
}
}
void main()
{
	int a[10],i,j;
	printf("\n Enter  the number 10 elements for 1-D array : ");
	for(i=0;i<=9;i++)
    {
//printf("\n Enter element [%d] : ",i+1);
scanf("%d",&a[i]);

}
 ascen(a);
}
	
//for(i=0;i<=9;i++){
 
