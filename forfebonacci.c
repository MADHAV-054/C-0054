#include<stdio.h>
int main()
{
int i,n,n1=0,n2=1,nt=n1+n2;
printf("enter value for n : ");
scanf("%d",&n);
printf("%d %d ",n1,n2);
for(i=2;i<=n;i++)
{ 
nt=n1+n2;
n1=n2;
n2=nt;
printf("%d ",nt);
}	
return(0);
}
