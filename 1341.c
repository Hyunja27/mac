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
	    for (i=s; i<=e; i++)
	    {
		for (j=1; j<=9; j++)
		{
		    printf("%d * %d = %2d   ",i,j,j*i);
		    if(j%3==0)
		    puts("");
		}
		puts("");
	    }
	    break;
	}
	else if (s > e)
	{
	    for (i=s; i>=e; i--)
	    {
		for (j=1; j<=9; j++)
		{
		    printf("%d * %d = %2d   ",i,j,j*i);
		    if(j % 3 == 0)
			puts("");
		}
		puts("");
	    }
	    break;
	}
	
else if (s > e)
        {
            for (i=s; i>=e; i--)
            {
                for (j=1; j<=9; j++)
                {
                    printf("%d * %d = %2d   ",i,j,j*i);
                    if(j % 3 == 0)
                        puts("");
                }
                puts("");
            }
            break;
        }

    }

return 0;    }

