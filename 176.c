#include <stdio.h>
#include <math.h>

void math(double a,double b)
{ int i,num1,num2;
if(a<b){
num1=(int)a;
num2=(int)b;}
else{
num1=(int)b;
num2=(int)a;}
 
for(i=0; i<=num2; i++){
if(i>=num1&&i<=num2)
 printf("%d ",i);}
}

int main(void)
{ double a,b,num1,num2;

scanf("%lf%lf",&a,&b);

num1=sqrt(a);
num2=sqrt(b);

printf("\n===%f %f==\n",num1,num2);

math(num1,num2);

return 0;
}
