#include <stdio.h>
int main()
{
	int a,b,result; 
	printf("enter two numbers : ");
	scanf("%d %d",&a,&b);
	result=(a>b)?a:b ;
	printf("the greatest of two numbers is : %d",result); 
	return(0);
}
