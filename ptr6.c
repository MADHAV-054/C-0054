#include<stdio.h>
main()
{
	int i=10;
	void *ptr;
	ptr=&i;
	printf("%u\n",(int*)ptr);
	printf("%u",*(int*)ptr);
}
