#include<stdio.h>
#include<stdlib.h>
void main()
{
	int exit,opt,balance=100000,wdl=0,add=0,wdl1,add1;
	do{
	printf("~~~~~~It's like a ATM~~~~~~~~");	
	printf("\nCheck balance for Press 1:\n");	
	printf("withdrall amount press 2:\n");
	printf("Add  Amount Press 3:\n"); 
	printf("press option :");
	wdl1=wdl;
	add1=add;
	scanf("%d",&opt);
	switch(opt){
		case 1:
			printf("Your Current balance is =%d\n",balance-wdl1+add1);
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			break;
		case 2:
			printf("Withdrall Here !\n");
			printf("Enter a amount ");
			scanf("%d",&wdl);
			printf("Thank you,Transcation  Succeccful.....\n ");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			break;
		case 3:
			printf("Add amount : !\n");
			printf("Enter a amount ");
			scanf("%d",&add);
			printf("Thank you,Amount has been added.....\n ");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			break;	
			default:
				printf("~~~~~~~~Sorry Invalid number~~~~~~.\n");
	}	
	printf("do you want to Exit now [1|0] : ");
	scanf("%d",&exit);
	system("cls");
	}while(exit==0);
}
