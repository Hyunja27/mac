#include <stdio.h>

int main(void){
int num1,num2;
char ch;

fscanf(stdin,"%d %d %c",&num1,&num2,&ch);

switch (ch){
 case '+':
  fprintf(stdout,"%d + %d = %d",num1,num2,num1+num2);
  break;
  case '-':
  fprintf(stdout,"%d - %d = %d",num1,num2,num1-num2);
  break;
 case '*':
  fprintf(stdout,"%d * %d = %d",num1,num2,num1*num2);
  break;
 case '/':
  fprintf(stdout,"%d / %d = %d",num1,num2,num1/num2);
  break;
 case '%':
  fprintf(stdout,"%d %% %d = %d",num1,num2,num1%num2);
  break;
}

return 0;
}
