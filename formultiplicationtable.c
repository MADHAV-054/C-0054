#include<stdio.h>
int main()
{ 
int i,n;
printf("enter value for n : ");
scanf("%d",&n);
for(i=1;i<=12;i++)
{	
printf("%d x %d = %d\n",n,i,i*n);
}
return(0);
}
