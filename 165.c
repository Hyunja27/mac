#include <stdio.h>

int main(void)
{int i,j,num[5][5]={0};

num[0][0]=1;
num[0][2]=1;
num[0][4]=1;

for(i=1; i<5; i++){

 if(i==1||i==3){
 for(j=0; j<5; j++){
  num[i][j+1]=num[i-1][j]+num[i-1][j+2];
  j++;
  }
 }
 if(i==2||i==4){
 for(j=0; j<5; j++){
  if(j==0)
   num[i][j]=num[i-1][j+1];
  else if (j==4)
   num[i][j]=num[i-1][j-1];
  else
   num[i][j]=num[i-1][j-1]+num[i-1][j+1];
  j++;
  }
 }

}

for(i=0; i<5; i++){
 for(j=0; j<5; j++)
  printf("%d ",num[i][j]);

printf("\n");
}

return 0;
}
