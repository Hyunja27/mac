#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int width,kind,i,j,a;
    scanf("%d%d",&width,&kind);
    if (kind == 1)
    {	a = 1;
	for (i = 0; i < width; i++)
	{
	    for (j = 0; j < width; j++)
	    {
		printf("%d ",a);
	    }
	    puts("");
	    a++;
	}
    }    
    else if (kind == 2)
    {
	for (i=0; i<width; i++)
	{  
	    a=1; 
	    for (j=0; j<width; j++)
	    {
		printf("%d ",a++);
	    }
	    puts("");
	    i++;
	    if (i == width)
		break;
	    for (j=width; j>0; j--)
	    {
		printf("%d ",j);
	    }
	    puts("");
	}
    }    
    else if (kind == 3)
    {
	for (i=0; i<width; i++)
	{  
	    a = i+1; 
	    for (j=1; j<=width; j++)
	    {
		printf("%d ",a*j);
	    }
	    puts("");
	}
    }    
    return 0;
}
