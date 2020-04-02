#include <stdio.h>

int main(void)
{int i,j,num[10];
 double sum,avg;

for(i=0; i<10; i++)
 scanf(" %d",&num[i]);

for(i=0; i<10; i++){
 sum+=num[i];
 i++;
}

avg=sum/5;

for(i=1; i<10; i++){
 sum+=num[i];
 i++;
}

printf("sum : %.0f\navg : %.1lf",sum,avg);

return 0;
}
