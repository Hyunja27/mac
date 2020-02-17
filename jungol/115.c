#include <stdio.h>

int main(void)
{
int n1,n2,n3,n4;
int a,b;

scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

if(n1>n3)
a=1;
else
a=0;

if(n2>n4)
b=1;
else
b=0;

printf("%d",a*b);



return 0;
}
