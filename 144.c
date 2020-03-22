#include <stdio.h>

int main(void)
{
int num1,i,j,k=1;

scanf("%d",&num1);

for(k=1; k<num1*2; k++){

for(i=num1*2-1-k; i>0; i--)
 printf(" ");
for(i=0; i<k; i++)
 printf("*");

printf("\n");

k++;

}



return 0;
}
