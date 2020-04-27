#include <stdio.h>
int dicearr[10]={0,};
int dicenum,sum;
void dicethrow(int idx)
{ 
    int i,j,total;
    for (i = 1; i <= 6; i++)
    {
	    dicearr[idx]=i;
	if (idx < dicenum)
	{
	    dicethrow(idx+1);
	}
	else if (idx == dicenum)
	{
	    total=0;
	    for (j=0; j<dicenum; j++)
		total += dicearr[j];
	    if (total == sum)
	    {
		for (j=0; j<dicenum; j++)
		{ 
		    printf("%d ",dicearr[j]);
		}
		puts("");
		break;
	    }
	}   
    }
}
int main(void)
{
    scanf("%d%d",&dicenum,&sum);
    dicethrow(0);    
    return 0;
}
