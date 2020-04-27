#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int lenth,i,j,a=65;
    scanf("%d",&lenth);
    char arr[lenth][lenth];
    
    for (i = lenth - 1; i >= 0; i--)
    {
	for(j = lenth - 1; j >= 0; j--)
	{
	    arr[j][i] = a++;
	    if(a == 91)
		a = 65;
	}
    }
    for (i = 0; i < lenth; i++)
    {
	for(j = 0; j < lenth; j++)
	{
	    printf("%c ",arr[i][j]);
	}
	puts("");
    }
    return 0;
}
