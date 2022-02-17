#include<stdio.h>
main()
{
	int n,r,sum=0,n1;
	printf("enter a number : ");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		r=n1%10;
		sum=sum+(r*r*r);
		n1/=10;
	}
	if(sum==n)
	printf("%d is an armstrong number",n);
	else
	printf("%d is not an armstrong number",n);
}    
