#include<stdio.h>
int main()
{
int a,b,c,*ptr,*ptrr;
scanf("%d\n%d",&a,&b);
ptr=&a;
ptrr=&b;
c=*ptr;
*ptr=*ptrr;
*ptrr=c;
printf("%d\n%d",a,b);
return(0);
}
