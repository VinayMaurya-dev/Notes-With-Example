/*wap to input 10 element of array and check a
 given  of value is how many times present in array and witch position. */
 #include<stdio.h>
 void main()
 {
 	int a[10],i,val ,count;
 	printf("Enter a  10 number :\n");
 	for(i=0;i<=9;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("Enter a value to check  it's present in array or not:\n ");
	 scanf("%d",&val);
	 printf("value is present at :");
	 for(i=0;i<=9;i++)
	 {
	 	if(a[i]==val)
	 	{ count++;
	 		printf("%d\t",i);
		 }
	 }
	 printf("\nposition in array ");
	 printf("total %d time %d present in array",val,count);
 }
 
