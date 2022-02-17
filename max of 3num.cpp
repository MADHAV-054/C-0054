#include<stdio.h>
main()
{
float num1,num2,num3;  
printf("enter 1st number:");
scanf("%f",&num1);
printf("enter 2nd number:");
scanf("%f",&num2);
printf("enter 3rd number:");
scanf("%f",&num3);
if (num1>num2 && num1>num3) 
printf("num1 is greatest");
else if (num2>num3 && num2>num3)
printf("num2 is greatest");
else
printf("num3 is greatest");
}
