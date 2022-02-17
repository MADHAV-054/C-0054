#include<stdio.h>
#include<ctype.h>
main()
{
char ch;
printf("enter a character : ");
scanf("%c",&ch);
if (ch>=90 && ch<=122)
{
printf("%c",touppper(ch));
}
else
{
printf("%c",tolower(ch));
}
}
