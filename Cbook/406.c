#include <stdio.h>

void rota1(int arr1[][4])
{
int i,j,k=1;

for(j=3; j>=0; j--)
 for(i=0; i<4; i++)  
   { 
     arr1[i][j]=k;
     k++;
   }
}

void rota2(int arr1[][4])
{
int i,j,k=1;

for(i=3; i>=0; i--)
 for(j=3; j>=0; j--)  
   { 
     arr1[i][j]=k;
     k++;
   }
}


void rota3(int arr1[][4])
{
int i,j,k=1;

for(j=0; j<4; j++) 
 for(i=3; i>=0; i--)  
   { 
     arr1[i][j]=k;
     k++;
   }
}




int main(void)
{
int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int i,j;

printf("initial arry is :\n\n");


for(i=0; i<4; i++)
{
 for(j=0; j<4; j++)
 { printf(" [%-1d ]",arr[i][j]);}
 printf("\n");
}

printf("\n");

rota1(arr);

printf("after rotation1  arry is :\n");

for(i=0; i<4; i++)
{
 for(j=0; j<4; j++)
 { printf(" [%-1d ]",arr[i][j]);}
 printf("\n");
}
printf("\n");
rota2(arr);

printf("after rotation2  arry is :\n");

for(i=0; i<4; i++)
{
 for(j=0; j<4; j++)
 { printf(" [%-1d ]",arr[i][j]);}
 printf("\n");
}
printf("\n");

rota3(arr);

printf("after rotation3  arry is :\n");

for(i=0; i<4; i++)
{
 for(j=0; j<4; j++)
 { printf(" [%-1d ]",arr[i][j]);}
 printf("\n");
}

printf("\n\nfinish!");



return 0;
}
