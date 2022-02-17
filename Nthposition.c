#include<stdio.h>
main()
{
int num,l,n1,n;
printf("enter a value for num : ");
scanf("%d",&num);
printf("enter a value for n : ");
scanf("%d",&n);
n1=num>>n;
printf("Nth position is : %d",l=n1&1);
}
