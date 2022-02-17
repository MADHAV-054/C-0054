#include<stdio.h>
#include<math.h>
main()
{
int P,r,t;
float val,Ci,result,Amt;  
printf("enter P :");
scanf("%d",&P);
printf("enter r :");
scanf("%d",&r);
printf("enter t :");
scanf("%d",&t);
val=1+(float)r/100;
result=pow(val,t);
Amt=(P*result);
Ci=Amt-P;
printf("the compound intrest is : %f",Ci);
}
