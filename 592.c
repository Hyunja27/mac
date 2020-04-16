#include <stdio.h>
int result=0;

void gob(int a)
{int num1;
 num1=a%10;
 
 result+=num1*num1;
 
 if(a/10>0)
  gob(a/10);
}

int main(void)
{int num1;
scanf("%d",&num1);

gob(num1);
 printf("%d",result);

return 0;
}
