#include <stdio.h>

int main(void)
{
int n1,n2,n3;
scanf("%d %d %d",&n1,&n2,&n3);

if(n1>n2&&n1>n3)
printf("1 ");
else
printf("0 ");

if(n1==n2&&n2==n3)
printf("1");
else
printf("0");


return 0;
}
