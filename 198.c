#include <stdio.h>

typedef struct{
double lenth;
double weight; 
}Status;

int main(void)
{Status str[2];
 int i;

for(i=0; i<2; i++){
 scanf("%lf%lf",&str[i].lenth,&str[i].weight);
}

printf("height : %dcm\nweight : %.1fkg",(int)(str[0].lenth+str[1].lenth)/2+5,(str[0].weight+str[1].weight)/2-4.5);




return 0;
}
