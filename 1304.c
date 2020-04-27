#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int lenth,i,j,result=1;
    scanf("%d",&lenth);
    for (i=1; i<=lenth; i++)
    {	result=i;
	for (j=0; j<lenth; j++)
	{
	    printf("%d ",result);
	    result += lenth;
	}
	puts("");
    }
    return 0;
}
