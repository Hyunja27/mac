#include <stdio.h>

void fac(int a, int *b){

 if(a==0)
  return;

(*b)*=a;
 fac(a-1,b);
}


int main(void){
int result=1,num1;

fscanf(stdin,"%d",&num1);

fac(num1,&result);

fprintf(stdout,"%d",result);

return 0;
}
