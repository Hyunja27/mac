#include <stdio.h>

int main(void){
double num1,num2,result;

fscanf(stdin,"%lf",&num1);
fscanf(stdin,"%lf",&num2);

result=num1+num2;

fprintf(stdout,"%.2f %.2f %.2f",num1,num2,result);

return 0;
}
