#include <stdio.h>

int main(void)
{
int arrlen;
int i,j,n,k=1;

scanf("%d",&arrlen);

int arr[arrlen][arrlen];





for(n=0; n<7; n++)
{
for(j=n; j<arrlen-n; j++)
  arr[n][j]=k++;

for(i=1+n; i<arrlen-n; i++)
  arr[i][arrlen-1-n]=k++;

for(j=arrlen-2-n; j>=0+n; j--)
  arr[arrlen-1-n][j]=k++;

for(i=arrlen-2-n; i>=1+n; i--)
  arr[i][n]=k++;
}


/*
//1
for(j=0; j<arrlen; j++)
  arr[0][j]=k++;

//2
for(i=1; i<arrlen; i++)
  arr[i][arrlen-1]=k++;

//3
for(j=arrlen-2; j>=0; j--)
  arr[arrlen-1][j]=k++;

//4
for(i=arrlen-2; i>=1; i--)
  arr[i][0]=k++;

//5
for(j=1; j<arrlen-1; j++)
  arr[1][j]=k++;

//6
for(i=2; i<arrlen-1; i++)
  arr[i][arrlen-2]=k++;

//7
for(j=arrlen-3; j>=1; j--)
  arr[arrlen-2][j]=k++;

//8
for(i=arrlen-3; i>=2; i--)
  arr[i][1]=k++;

//9
for(j=2; j<arrlen-2; j++)
  arr[arrlen-4][j]=k++;
//10
for(i=3; i<arrlen-2; i++)
  arr[i][arrlen-3]=k++;
//11
for(j=arrlen-3; j>=2; j--)
  arr[arrlen-3][j]=k++;
//12
for(i=arrlen-3; i>=3; i--)
  arr[i][arrlen-3]=k++;
*/



printf("result is :\n");

for(i=0; i<arrlen; i++)
{
 for(j=0; j<arrlen; j++)
  {printf(" [%-1d ]  ",arr[i][j]);  }
 printf("\n");
}













return 0;
}
