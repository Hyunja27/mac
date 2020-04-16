#include <stdio.h>
int i=0,arr[50];

void seperation(int a)
{int num1;

if(a%10!=0){
 num1=a%10;
 arr[i]=num1;
 i++;
 seperation(a/10);}
else if(a%10==0&&a/10!=0){
seperation(a/10);
}
 
}

int main(void)
{int j,num1,num2,num3,result=1;

 scanf("%d%d%d",&num1,&num2,&num3);

 seperation(num1*num2*num3);

 for(j=0; j<i; j++)
  result=result*arr[j];

 printf("%d",result);
return 0;
}
