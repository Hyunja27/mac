#include <stdio.h>

void rtbig(int a, int b)
{ int num1,num2;
 
 num1=a;
 num2=b;
 
if(a<0)
 num1=a*-1;
 
if(b<0)
 num2=b*-1;

if(num1>num2)
 printf("%d",num1);
else if(num1<num2)
 printf("%d",num2);
else
 printf("%d",num1);
 
}

void rtsmall(double a, double b)
{ double num1,num2;
num1=a;
 num2=b;
 
if(a<0)
 num1=a*-1;
 
if(b<0)
 num2=b*-1;

if(num1<num2)
 printf("%.2f",num1);
else if(num1>num2)
 printf("%.2f",num2);
else
 printf("%.2f",num1);
}

int main(void)
{int num1,num2;
 double num3,num4;

scanf("%d%d",&num1,&num2);

rtbig(num1,num2);

scanf("%lf%lf",&num3,&num4);

rtsmall(num3,num4);

return 0;

}

