#include <stdio.h>

int main(void)
{int i,num1,num[6]={0};

for(i=0; i<6; i++){
 scanf("%d",&num1);
 num[num1-1]++;
}

for(i=0; i<6; i++){
 if(num[i]>=0)
  printf("%d : %d\n",i+1,num[i]);
}

return 0;
}
