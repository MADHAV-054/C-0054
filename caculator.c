#include<stdio.h>
main()
{
char ch;
int num1,num2;
scanf("%d",&num1,&num2);
switch (ch)	
{
case '+':
    result=num1+num2;
	break;
case '-':
    result=num1-num2;
	break;
case '*':
    result=num1*num2;
	break;
case '/':
    result=num1/num2;
	break;
default:
    printf("invalid operator");
	break;							
}
}
