#include<stdio.h>
main()
{
int a,b;
printf("enter a value for a : ");
scanf("%d",&a);
printf("enter a value for b : ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("the values after swapping is : %d\n%d\n",a,b);
} 
