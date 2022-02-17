#include<stdio.h>
main()
{
int num;
scanf("%d",&num);
switch (num%2)	
{
case 0:
    printf("even");
	break;
case 1:
    printf("odd");
	break;
default:
    printf("enter numbers");
	break;							
}
}
