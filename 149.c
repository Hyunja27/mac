#include <stdio.h>

int main(void)
{int num1,i,j,o=1;

scanf("%d",&num1);

for(i=0; i<num1; i++){ 
 for(j=0; j<num1; j++){
  printf("%d ",o);
  o++;
  o++;
  if(o>8)
   o=1;
 }

 printf("\n");
}

return 0;
}
