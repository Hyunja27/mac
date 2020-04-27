#include <stdio.h>
int main(void)
{
    int s,e,i,j;
    
    while(1)
    {
	scanf("%d%d",&s,&e);
	getchar();
	
	if(s> 9 || e > 9 || s<2 || e<2)
	{
	    puts("INPUT ERROR!");
	    continue;
	}   
	else if (s < e)
	{
	    for (i=1; i<=9; i++)
	    {
		for (j=s; j<=e; j++)
		{
		printf("%d * %d = %2d   ",j,i,j*i);
		}
		puts("");
	    }
	    break;
	}
	else if (s > e)
	{
	    for (i=1; i<=9; i++)
	    {
		for (j=s; j>=e; j--)
		{
		printf("%d * %d = %2d   ",j,i,j*i);
		}
		puts("");
	    }
	    break;
	}
	
    }

return 0;
}
