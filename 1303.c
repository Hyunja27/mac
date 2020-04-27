#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,l,w,a=1;
	scanf("%d%d",&l,&w);
	int arr[l][w];
	
	for (i=0; i<l; i++)
	{
		for (j=0; j<w; j++)
		{
			arr[i][j]=a++;
		}
		i += 1;
	    	for (j=w-1; j>=0; j--)
		{
			arr[i][j]=a++;
		}

	}
	for (i=0; i<l; i++)
	{
		for (j=0; j<w; j++)
		{
			printf("%d ",arr[i][j]);
		}
		puts("");
	}
	return 0;
}
