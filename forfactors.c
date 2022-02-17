#include<stdio.h>
main()
{ 
int i,j;
printf("enter a value for j : ");
scanf("%d",&j);
for(i=1;i<=j;i++)
{
if(j%i==0)
printf("%d\n",i);
}
}
