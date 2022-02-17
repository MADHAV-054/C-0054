#include<stdio.h>
main()
{
int num,l,n1=0,n;
printf("enter a value for num : ");
scanf("%d",&num);
if(num<=20)
{
	printf("enter a value for n : ");
    scanf("%d",&n);
	n1=num>>n;
	printf("Nth position is : %d",l=n1&1);
}
else
printf("lsb is : %d",l=num&1);
}
