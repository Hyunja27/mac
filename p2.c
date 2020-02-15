#include <stdio.h>

int main(void)
{
int n1,n2,a,b;


scanf("%d %d",&n1,&n2);

if(n1!=0)
a=1;

if(n2!=0)
b=1;

printf("%d %d",a&&b,a||b);


return 0;
}
