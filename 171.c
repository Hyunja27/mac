#include <stdio.h>

int grade(int a)
{int i,sum=0;

for(i=0; i<a+1; i++)
 sum+=i;

return sum;
}


int main(void)
{ int num1,result;
scanf("%d",&num1);

result=grade(num1);

printf("%d\n",result);

return 0;
}
