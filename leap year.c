#include<stdio.h>
main()
{
int year;
printf("enter year : ");
scanf("%d",&year);
if (year%4==0)
{
printf("entered year is leap year");
}
else
{
printf("entered year is not a leap year ");
}
}
