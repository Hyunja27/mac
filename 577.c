#include <stdio.h>

void hyun(int *a, int *b)
{ if(*a>*b){
  *a=*a/2;
  *b=*b*2;}
  else{
  *b=*b/2;
  *a=*a*2;}
}

int main(void)
{int a,b;

scanf("%d %d",&a,&b);

hyun(&a,&b);

printf("%d %d",a,b);

return 0;
}
