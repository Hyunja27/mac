#include <stdio.h>


int main(void)
{int cmt,i,j,num[5][5]={{1,1,1,1,1},{1},{1},{1},{1}};


for(j=0; j<5; j++)
 printf("%d ",num[0][j]);

printf("\n");

for(i=1; i<5; i++){
 printf("%d ",num[i][0]);
 for(j=1; j<5; j++){
  cmt=num[i-1][j]+num[i][j-1];
  num[i][j]=cmt;
  printf("%d ",num[i][j]);
}
printf("\n");
}

return 0;
}
