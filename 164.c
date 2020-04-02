#include <stdio.h>

int main(void)
{int i,j,sum=0,num[4][3]={0};

for(i=0; i<4; i++){
 printf("%dclass? ",i+1);
 for(j=0; j<3; j++){
 scanf(" %d",&num[i][j]);
 }
}



for(i=0; i<4; i++){
 sum=0;
 for(j=0; j<3; j++){
 sum+=num[i][j];
 }
printf("%dclass : %d\n",i+1,sum);
}

return 0;
} 
