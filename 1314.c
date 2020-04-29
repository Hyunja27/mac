
            for(j = lenth - 1; j >= 0; j--)#include <
                if(a == 91)
        }
    }

    for (i = 0; i < lenth; i++)
                arr[j][i] = a++;
                if(a == 91)
                    a = 65;
            }
        else if (j == lenth)
        {
            for(j = lenth - 1; j >= 0; j--)
            {stdio.h>
#include <stdlib.h>
int main(void)
{
    int lenth,i=0,j=0,n=0,a=65;
    scanf("%d",&lenth);
    char arr[lenth][lenth];
    
    for (i = 0; i < lenth; i++)
    {	
	if (j == -1 || j == 0)
	{	    
	    for(j = 0; j < lenth; j++)
	    {
		arr[j][i] = a++;
		if(a == 91)
		    a = 65;
	    }
	}
	else if (j == lenth)
	{	    
	    for(j = lenth - 1; j >= 0; j--)
	    {
		arr[j][i] = a++;
		if(a == 91)
		    a = 65;
	    }
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
