// write a  program to enter valid email.
#include<stdio.h>
void main()
{
 char email[100];
 int i, at=0,dot=0,eindex,dindex;
 printf("Enter your Email:");
 gets(email);
 for(i=0;email[i]!='\0';i++)
 {
 	if(email[i]=='@')
 	{
 	at=at+1;
 	eindex=i;
 }
 	else if(email[i]=='.')
 	{
 	dindex=i;
 	dot=dot+1;
 }
 	
 }
 if(dot==1 && at==1 && eindex<dindex)
 {
 	printf("This is a valid Email");
 }
 else{
 	printf("This is not valid Email");
 }
}
