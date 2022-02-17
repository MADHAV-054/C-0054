#include<stdio.h>
main()
{
	int choice;
	char ch;
	do
	{
	printf("*****Menu*****\n");
	printf("1-idly\n");
	printf("2-dosa\n");
	printf("3-vada\n");
	printf("4-poori\n");
	printf("5-upma\n");
	printf("6-rava dosa\n");
	printf("7-chapati\n");
	printf("what would you like to order Sir?\n");
	printf("My choice \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
                printf("idly-20rs");
	            break;
        case 2:
                printf("dosa-30rs\n");
	            break;
        case 3:
                printf("vada-20rs\n");
	            break;
        case 4:
                printf("poori-30rs\n");
             	break;
        case 5:
                printf("upma-40rs\n");
	            break;
        case 6:
                printf("rava dosa-50rs\n");
            	break;
        case 7:
                printf("chapati-30rs\n");
	            break;	
        default:
                printf("enter valid choice\n");
	            break;	
    } 
    printf("do youwant to order more:\n");
    scanf(" %c",&ch);
    }while(ch=='y');
 }
