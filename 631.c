#include <stdio.h>

int main(void){
double cirlen,result;

while(1){
fscanf(stdin,"%lf",&cirlen);

if(cirlen==0)
 return 0;

result=(cirlen/2)/3.14;

fprintf(stdout,"%.2f\n",result);
}

return 0;
}
