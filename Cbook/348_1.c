#include <stdio.h>

int main(void)
{
int arr[3][9];
int i,j;

for(i=0; i<3; i++)
{	
	for(j=0; j<9; j++)
	{
	 scanf("%d",&arr[i][j]);
	}
}

printf("result is :\n");

for(i=0; i<3; i++)
{
 for(j=0; j<9; j++)
 {
 printf("%d ",arr[i][j]);
 }
 printf("\n");
}


return 0;
}
