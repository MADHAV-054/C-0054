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
		sum=sum*10+r;
		n1/=10;		
	}
	if(sum==n)
	printf("%d is a palindrome",n);
	else
	printf("%d is not a palindrome",n);
}    
