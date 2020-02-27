#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int i,t;
 printf("lets Throw the dice! how many time to throw? \n");
 scanf("%d",&t);


 

 srand((int)time(NULL));

 printf("\n\nThrow the 6d dice! : %d time! \n",t);

 for(i=0; i<t; i++)
  printf("%dtime dice number : %d \n",i+1,rand()%6+1);

return 0;
} 
