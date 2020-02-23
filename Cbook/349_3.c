#include <stdio.h>

int main(void)
{
int arr1[5][5];
int i,j,t1=0,tt1=0;

for(i=0; i<4; i++)
{
 for(j=0; j<4; j++)
 {
 scanf("%d",&arr1[i][j]);	 
 }
}

printf("\ninput data is :\n");

for(i=0; i<5; i++)
{
 for(j=0; j<5; j++)
 {
 printf(" [%d] ",arr1[i][j]);
 }
printf("\n");
}


for(i=0; i<4; i++)
{
 t1=0;
 for(j=0; j<4; j++)
 {
  t1+=arr1[i][j];
 }
 arr1[i][4]=t1;
}

for(j=0; j<4; j++)
{
 tt1=0;
 for(i=0; i<4; i++)
 {
  tt1+=arr1[i][j];
 }
 arr1[4][j]=tt1;
}
 
 tt1=0;
for(i=0; i<4; i++)
 {
  tt1+=arr1[4][i];
 } 

arr1[4][4]=tt1;

printf("\n result is :\n");

for(i=0; i<5; i++)
{
 for(j=0; j<5; j++)
 {
 printf(" [%d] ",arr1[i][j]);
 }
printf("\n");
}



return 0;
}
