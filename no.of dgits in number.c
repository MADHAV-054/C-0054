#include<stdio.h>
main()
{
	int n,r;
	printf("enter a number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		r++;
	}
	printf("number of digits in given number is : %d",r);
}
