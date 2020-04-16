#include <stdio.h>

int main(void){
int num1,num2,num3,sum,avg1,avg2;

fscanf(stdin,"%d",&num1);
fscanf(stdin,"%d",&num2);
fscanf(stdin,"%d",&num3);

sum=num1+num2+num3;

avg1=sum/3;
avg2=sum%3;

fprintf(stdout,"%d %d...%d",sum,avg1,avg2);

return 0;
}
