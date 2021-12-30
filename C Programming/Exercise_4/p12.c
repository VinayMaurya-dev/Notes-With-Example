 #include<stdio.h>
void main() 
{
 int number = 4; 
switch(number)
 {
 case 1: 
case 3:
 case 5:
 case 7: 
case 9:
 printf("%d is an odd number", number);
 break; 
case 2: 
case 4:
 case 6: 
case 8:
 printf("%d is an even number\n", number);
 break;
 default:
 printf("%d is a value not between 1 and 9 ", number);
 }
 }

