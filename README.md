#include<stdio.h>
void nth(void);
void lsb(void);
void nth()
{ 
int num,l,n1,n;
printf("enter a value for num : ");
scanf ("%d",&num);
printf("enter a value for n : ");
scanf ("%d",&n);
n1=num>>n;
printf ("Nth position is : %d", l=n1&1);
}

void lsb()
{ 
int n,l;
printf("\nenter a value : ");
scanf("%d",&n);
printf("LSB is : %d",l=n&1);
} 

int main()
{
nth();
lsb();
}