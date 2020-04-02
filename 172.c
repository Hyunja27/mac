#include <stdio.h>

void lectangle(int a)
{int i,j,k=1;

for(i=1; i<a+1; i++){
 for(j=1; j<a+1; j++){ 
  printf("%d ",i+i*(j-1));
}
printf("\n");
}

}


int main(void)
{ int num1;

scanf("%d",&num1);

lectangle(num1);

return 0;
}
