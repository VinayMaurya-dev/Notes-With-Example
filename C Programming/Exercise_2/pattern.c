//[10:02 AM, 10/7/2021] ????Divya mam??: 
//1 2 3 4
//1 2 3
//1 2 
//1
//#include<stdio.h>
//
//void main()
//{
//	int i,j;
//	for(i=4;i>=1;i--)
//	{
//	for(j=1;j<=i;j++)
//	{
//	printf("%d",j);
//	}
//	printf("\n");
//}
//}
//
//4 4 4 4 
//3 3 3
//2 2
//1
//#include<stdio.h>
//
//void main()
//{
//	int i,j;
//	for(i=4;i>=1;i--)
//	{
//	for(j=1;j<=i;j++)
//	{
//	printf("%d",i);
//	}
//	printf("\n");
//}
//}

//
//5 5 5 5 5
//4 4 4 4 4
//3 3 3 3 3
//2 2 2 2 2
//
//#include<stdio.h>
//void main()
//{
//	int i,j;
//	for(i=5;i>=2;i--)
//	{
//	for(j=1;j<=5;j++)
//	{
//	printf("%d",i);
//	}
//	printf("\n");
//}
//}

//6 6 6 6 6 
//5 5 5 5
//4 4 4 
//3 3 
//2 
//#include<stdio.h>
//void main()
//{
//	int i,j;
//	for(i=6;i>=2;i--)
//	{
//	for(j=1;j<=i;j++)
//	{
//	printf("%d",i);
//	}
//	printf("\n");
//}
//}
//6 6 6 6 6 
//5 5 5
//4
//#include<stdio.h>
//void main()
//{
//	int i,j,n=0;
//	for(i=6;i>=4;i--)
//	{
//	for(j=1;j<=14;j=j+n)
//	{
//		n=n+1;
//	printf("%d",i);
//	}
//	printf("\n");
//}
//}

//* * * *
//* * *
//* *
//* 
//#include<stdio.h>
//void main()
//{
//	int i,j;
//	for(i=4;i>=1;i--)
//	{
//	for(j=1;j<=i;j++)
//	{
//	printf("*");
//	}
//	printf("\n");
//}
//}

//* * * * *
//* *   * *
//*       *
//#include<stdio.h>
//void main()
//{
//	int i,j;
//	for(i=5;i>=3;i--)
//	{
//	for(j=1;j<=i;j++)
//	{
//		if(j==4)
//		printf(" ");
//	printf("*");
//	}
//	printf("\n");
//}
//}

//# # # # #
//$ $ $ $ $
//# # # # #
//$ $ $ $ $
//# # # # #
//#include<stdio.h>
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//	for(j=1;j<=5;j++)
//	{
//		if(i%2!=0)
//	printf("#");
//	else
//	printf("&");
//	}
//	printf("\n");
//}
//}

//A A A A A
//B B B B B
//C C C C C
//D D D D D
//#include<stdio.h>
//void main()
//{
//	char i;
//	int j;
//	for(i='A';i<='D';i++)
//	{
//	for(j=1;j<=5;j++)
//	{  
//	printf("%c",i);
//	}
//	printf("\n");
//}
//}

//A
//B B
//C C C
//D D D D
//#include<stdio.h>
//void main()
//{
//	char i;
//	int j;
//	for(i='A';i<='D';i++)
//	{
//	for(j='A';j<=i;j++)
//	{  
//	printf("%c",i);
//	}
//	printf("\n");
//}
//}

//
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//* * * * * * *
//#include<stdio.h>
//void main()
//{
//	char i;
//	int j,sp;
//	for(i=1;i<=7;i++)
//	{
//		for(sp=1;sp<=7-i;sp++)
//		{
//		printf(" ");
//		}
//	for(j=1;j<=i;j++)
//	{  
//	printf("* ");
//	}
//	printf("\n");
//}
//}
//* * * *
// * * *
//  * *
//   *
//#include<stdio.h>
//void main()
//{
//	char i;
//	int j,sp;
//	for(i=4;i>=1;i--)
//	{
//		for(sp=1;sp<=4-i;sp++)
//		{
//		printf(" ");
//		}
//	for(j=1;j<=i;j++)
//	{  
//	printf(" *");
//	}
//	printf("\n");
//}
//}
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//* * * * * * *
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
//#include<stdio.h>
//void main()
//{
//	int i;
//	int j,sp;
//	for(i=1;i<=14;i++)
//	{
//		for(sp=1;sp<=7-i;sp++)
//		{
//		printf(" ");
//		}
//	for(j=1;j<=i;j++)
//	{  
//	printf("* ");
//	}
//	printf("\n");
//}
//	for(i=7;i>=1;i--)
//	{
//		for(sp=1;sp<=7-i;sp++)
//		{
//		printf(" ");
//		}
//	for(j=1;j<=i;j++)
//	{  
//	printf("* ");
//	}
//	printf("\n");
//}
//}

//[10:03 AM, 10/7/2021] ????ivya mam??: 
//for(i=1;i<=5;i=i+2 )
//{
//for(j=1;j<=4;j++)
//{
//
//}	
//}
//1 1 1 1
//3 3 3 3
//5 5 5 5
//
//-------------------------------------------------
//for(i=1;i<=6;i=i+2)
//{
//for(j=1;j<=4;j++)
//{
//	j=?, i=?
//	}	
//}
//------------------------------
//for(i=5;i>=1;i--)
//{
//for(j=1;j<=5;j++)
//{
//	j=?, i=?
//	}	
//}
//--------------------------------
//for(i=1;i<=6;i++)
//{
//	for(j=5;j>=1;j--)
//	{
//		j=?, i=?
//	}
//	
//}
//---------------------------------------------
//for(i='A';i<='E';i++)
//{
//	for(j=1;j<=5;j++)
//	{
//		i=? , j=?
//	}
//}
//---------------------------------------------
//for(i=1;i<=6;i++)
//{
//	for(? ; ? ; ?)
//	{
//		
//	}
//}
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
