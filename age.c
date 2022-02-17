#include<stdio.h>
main()
{
int age;
printf("enter the age of the person:");
scanf("%d",&age);
if (age>=18)	
printf("eligible to vote:%d",age);
else
printf("not eligible to vote:%d",age);
}
