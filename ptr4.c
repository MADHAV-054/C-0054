#include<stdio.h>
main()
{
	int i=10,*ptr;
	ptr=&i;
	ptr=ptr+1;
	printf("%u",ptr);
}
