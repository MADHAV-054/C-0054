#include<stdio.h>
#include<ctype.h>
main()
{
char ch;
printf("enter a character : ");
scanf("%c",&ch);
if ((ch>='a') && (ch<='z') || (ch>='A') && (ch<='Z') )
{
printf("it is an alphabet");
}
else
{
printf("it is not an alphabet");
}
}
