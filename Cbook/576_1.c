#include <stdio.h>
#include <stdlib.h>

#define triples(X,Y,Z) ((X+Y+Z))
#define triplex(X,Y,Z) ((X*Y*Z))

int main(void)
{
 int a,b,c,sum,mul;
 
 scanf("%d%d%d",&a,&b,&c);

 sum=triples(a,b,c);
 mul=triplex(a,b,c);

 printf("sum is :%d\n",sum);
 printf("mul is :%d\n",mul);




return 0;
}
