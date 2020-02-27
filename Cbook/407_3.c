#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i;

printf("\n ===================\n randomizer: 0 to %d \n ===================\n",RAND_MAX%100);
for(i=0; i<5; i++)
printf("random number : %d \n",rand()%100);
printf("\n");


printf("\n ===================\n randomizer: 0 to %d \n ===================\n",RAND_MAX%100);
for(i=0; i<5; i++)
printf("random number : %d \n",rand()%100);
printf("\n");

printf("\n ===================\n randomizer: 0 to %d \n ===================\n",RAND_MAX%100);
for(i=0; i<5; i++)
printf("random number : %d \n",rand()%100);
printf("\n");


return 0;
}

