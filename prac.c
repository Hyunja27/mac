#include <stdio.h>

void arrange(double a, double b, double c)
{ double f1,f2,f3;

 if(a>b&&a>c){
  if(b>c){
   f1=a;
   f2=b;
   f3=c;
   }
  
  if(c>b){
   f1=a;
   f2=c;
   f3=b;
   }}
   
 else if(b>a&&b>c){
  if(a>c){
   f1=b;
   f2=a;
   f3=c;
   }
  
  if(c>a){
   f1=b;
   f2=c;
   f3=a;
   }}

 else if(c>a&&c>a){
  if(b>a){
   f1=c;
   f2=b;
   f3=a;
   }
  
  if(a>b){
   f1=c;
   f2=a;
   f3=b;
   }}

 else
   return;
 

 printf("%d ",(int)f1+1);
 printf("%d ",(int)f2); 
 printf("%.2f",f3);

}

int main(void)
{double num1,num2,num3;

scanf("%lf %lf %lf",&num1,&num2,&num3);

printf("%f %f %f\n",num1,num2,num3);

arrange(num1,num2,num3);


return 0;
}
