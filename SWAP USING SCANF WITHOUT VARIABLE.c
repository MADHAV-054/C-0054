#include<stdio.h>
main()
{
int a,b;
scanf("%d%d",&a,&b);
a=a+b,a=a-b,b=a-b;
printf("%d\n%d\n",a,b);
}
