#include <stdio.h>

#define MAX(A,B) ((A>B)?(A):(B)) 


int main(void)
{
int A,B,c;

scanf("%d%d",&A,&B);
c=MAX(A,B);

printf("%d",c);



return 0;
}
