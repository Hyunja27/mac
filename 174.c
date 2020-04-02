#include <stdio.h>

void summer(int a[3][3])
{
 int i,j,k=0,sum=0;
 
 for(j=0; j<3; j++){
  for(i=0; i<3; i++){
   printf("%d ",a[j][i]);
   sum+=a[j][i];
   }
   printf("%d\n",sum);
   sum=0;
  }
 for(j=0; j<3; j++){ 
  for(i=0; i<3; i++){
   sum+=a[i][j];}
   printf("%d ",sum);
   k+=sum;
   sum=0;
   }
 printf("%d",k);
}

int main(void)
{ int i,j,num[3][3]={0};

 for(j=0; j<3; j++)
  for(i=0; i<3; i++)
   scanf(" %d",&num[j][i]);

summer(num);

return 0;
}
