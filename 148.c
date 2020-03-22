#include <stdio.h>

int main(void)
{
int num1,i,j;

scanf("%d",&num1);

for(i=1; i<num1+1; i++){
 for(j=0; j<i; j++){
  printf("# ");
 }

printf("\n");
}

for(i=1; i<num1+1; i++){
 for(j=0; j<i; j++){
  printf("  ");
 }
 for(j=0; j<num1-i; j++)
  printf("# ");


printf("\n");
}



return 0;
}








