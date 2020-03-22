#include <stdio.h>

int main(void)
{
double score;
scanf("%lf",&score);
printf("%d",(int)score);


switch ((int)score){

case 4 :
    puts("scholaship");
    break;
case 3 :
    puts("next semester");
    break;
case 2 :
    puts("seasonal semester");
    break;
case 1 :
    puts("retake");
    break;   
}


return 0;
}

