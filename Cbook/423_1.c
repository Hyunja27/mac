#include <stdio.h>

int main(void)
{

int t,e;
int * a;

t=getchar();

a=&t;

if(*a>=65&&*a<=90)
 *a=*a+32;
else if(*a>=97&&*a<=122)
 *a=*a-32;
else
 printf("No! it\'s not capital.!\n\n");


putchar(t);

return 0;
}
