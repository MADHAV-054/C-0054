#include<stdio.h>
#include<math.h>
main()
{
int P,r,t;
float val,Ci,Si,result,Amt;  
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
Si=P*(1+r*t);
if (r>3)
printf("the simple intrest is : %f",Si);
else 
printf("the compound intrest is : %f",Ci);
}
