#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
typedef struct{
    int ID;
    char TYPE[21];
    int X;
    int Y;
    int VX;
    int VY;
    int STATE;
    int MANY;
}Status;
Status stat[30] = {0,};
double lenth(Status * a, Status * b)
{
    int numx,numy;
    double result;
    numx = (a->X) - (b->X);
    if (numx < 0)
	numx=numx * -1
    numy = (a->Y) - (b->Y);
    if (numy < 0)
	numy = numy * -1;
    result = sqrt((numx*numx) + (numy*numy));
    return result;
}


int SNtrackingsmall(int a)
{
    int i,j = 0;
    double far[2][15] = {0,},tmp,tmp2;
    for(i = 4; i < stat[0].MANY - 2; i++)
    {
        far[0][i] = lenth(&stat[a],&stat[i]);
        far[1][i] = i;
    }
    while (j < stat[0].MANY - 2)
    {
	for (i = 4; i < stat[0].MANY - 2; i++)
	{
	    if (far[0][i] < far[0][i + 1])
	    {
	    tmp = far[0][i];
	    tmp2 = far[1][i];
	    far[0][i] = far[0][i+1];
	    far[1][i] = far[1][i+1];
	    far[0][i+1] = tmp;
	    far[1][i+1] = tmp2;
	    }
	}
    j++;
    }
    for(i = stat[0].MANY - 2; i > 3; i--)
    {
	if (far[0][i] < 5000)
	{
	    if(far[0][i] == 0)
	    continue;
	    else
	    {
		return far[1][i];
	    }
	}
	else 
	return -1;
    }
}
int SNtrackingsmall2 (int a)
{
    int i,j = 0;
    double far[2][15] = {0,},tmp,tmp2;
    for (i = 4; i < stat[0].MANY - 2; i++)
    {
	far[0][i] = lenth(&stat[a],&stat[i]);
        far[1][i] = i;
    }
    while(j < stat[0].MANY - 2)
    {
	for (i = 4; i < stat[0].MANY - 2; i++)
	{
	    if (far[0][i] < far[0][i + 1])
	    {
	    tmp = far[0][i];
	    tmp2 = far[1][i];
	    far[0][i] = far[0][i + 1];
	    far[1][i] = far[1][i + 1];
	    far[0][i + 1] = tmp;
	    far[1][i + 1] = tmp2;
	    }	
	}
    j++;
    }
    for (i = stat[0].MANY - 2; i > 3; i--)
    {
	if (far[0][i] < 5000)
	{
	    if (far[0][i] == 0)
		continue;
	    else
	    {
		return far[1][i - 1];
	    }
	}
	else 
	    return -1;
    }
}
int SNtrackinglarge(int a)
{
    int i,j = 0;
    double far[2][15] = {0,},tmp,tmp2;
    for (i = 4; i < stat[0].MANY - 2; i++)
    {
	far[0][i] = lenth(&stat[a],&stat[i]);
        far[1][i] = i;
    }
    while (j < stat[0].MANY - 2)
    {
	for (i = 4; i < stat[0].MANY - 2; i++)
	{
	    if (far[0][i] < far[0][i + 1])
	    {
		tmp = far[0][i];
		tmp2 = far[1][i];
		far[0][i] = far[0][i + 1];
		far[1][i] = far[1][i + 1];
		far[0][i + 1] = tmp;
		far[1][i + 1] = tmp2;
	    }
	}
    j++;
    }  
    for (i = stat[0].MANY - 2; i > 3; i--)
    {
	if (far[0][i] < 7000)
	{
	    if (far[0][i] == 0)
		continue;
	    else
	    {
	    return far[1][i];
	    }
	}
    else 
       return -1;
    }
}
int SNtrackinglarge2(int a)
{
    int i,j = 0;
    double far[2][15] = {0,},tmp,tmp2;
    for (i = 4; i < stat[0].MANY - 2; i++)
	{
	    far[0][i] = lenth(&stat[a],&stat[i]);
	    far[1][i] = i;
	}
	while (j < stat[0].MANY - 2)
	{
	    for (i = 4; i < stat[0].MANY - 2; i++)
	    {
		if (far[0][i] < far[0][i + 1])
		{
		tmp = far[0][i];
		tmp2 = far[1][i];
		far[0][i] = far[0][i + 1];
		far[1][i] = far[1][i + 1];
		far[0][i + 1] = tmp;
	        far[1][i + 1] = tmp2;
		}
	    }
	    j++;
	}
	for (i = stat[0].MANY - 2; i > 3; i--)
	{
	    if (far[0][i] < 7000)
	    {
		if (far[0][i] == 0)
		    continue;
		else
		{
		    return far[1][i-1];
		}
	    }
	    else 
		return -1;
	}
}
int main()
{

    int tmpx,tmpy,tmpint1,tmpint2;
    int shootskill1=0,shootskill2=0,mvskill1=0,mvskill2=0;
    int my_team_id;
    scanf("%d", &my_team_id);
    // game loop
    while (1) {
        int my_score;
        int my_magic;
        scanf("%d%d", &my_score, &my_magic);
        int opponent_score;
        int opponent_magic;
        scanf("%d%d", &opponent_score, &opponent_magic);
        // number of entities still in game
        int entities;
        scanf("%d", &entities);
        for (int i = 0; i < entities; i++) {
            // entity identifier
            int entity_id;
            // "WIZARD", "OPPONENT_WIZARD" or "SNAFFLE" (or "BLUDGER" after first league)
            char entity_type[21];
            // position
            int x;
            // position
            int y;
            // velocity
            int vx;
            // velocity
            int vy;
            // 1 if the wizard is holding a Snaffle, 0 otherwise
            int state[i];
            scanf("%d%s%d%d%d%d%d", &entity_id, entity_type, &x, &y, &vx, &vy, &state[i]);
        
            stat[i].ID=entity_id;
            memcpy(stat[i].TYPE,entity_type,sizeof(entity_type));
            stat[i].X=x;
            stat[i].Y=y;
            stat[i].VX=vx;
            stat[i].VY=vy;
            stat[i].STATE=state[i];
            stat[i].MANY=entities;
        
         //fprintf(stderr,"[ID]=%d\n[TYPE]=%s\n[X]=%d\n[Y]=%d\n[STATE]=%d\n[MANY]=%d\n[SNtr_small]=%d\n[SNtr_large]=%d\n\n",stat[i].ID,stat[i].TYPE,stat[i].X,stat[i].Y,stat[i].STATE,stat[i].MANY,SNtrackingsmall(i),SNtrackinglarge(i));
        }
    ==Left side==
    if (my_team_id == 0)
    { 
	//=====attacker====
	if (Stat[0].ID == 0)
	{
	    if (stat[0].X > 8000)
	    {	
		if (stat[0].STATE != 0)
		{
		    if (len(&stat[0],&stat[2]) < 300 ||\
			 len(&stat[0],&stat[3]) < 300)
		    {	
			if (len(&stat[0],&stat[1]) <= 1100) 
			{   
			    printf("THROW stat[1].X stat.[1].Y 500\n");
			}
			if (len(&stat[0],&stat[1]) > 1100)
			{
			    printf("THROW 16000 2500 500\n"");
			}
		    }
		    else
		    {	
			printf("THROW 16000 2500 500\n"");
		    } 		 
		}
		if (stat[0].STATE == 0)
		{
		    if (len(&stat[SNtrackinglarge(0)],&stat[2])<300 || \
			len($stat[SNtrackinglarge(0)],&stat[3])<300)
		    {
			 printf("MOVE stat[0].X stat[0].Y 150\n");
		    }
		    else 
		    {
			 printf("MOVE stat[SNtrackinglarge(0)].X \
				stat[SNtrackinglarge(0)].Y 150\n");
		    }
		}
	    }
	    if (stat[0].X <= 8000)
	    {	
		    if (stat[0].STATE != 0)
		    {
			if (len(&stat[0],&stat[2]) < 300 ||\
			     len(&stat[0],&stat[3]) < 300)
			{	
			    if (len(&stat[0],&stat[1]) <= 1100) 
			    {   
				printf("THROW stat[1].X stat.[1].Y 500\n");
			    }
			    if (len(&stat[0],&stat[1]) > 1100)
			    {
				printf("THROW 16000 7400 500\n"");
			    }
			}
			else
			{
			    printf("THROW 16000 4800 500\n"");
			}	
		    }
		    if (stat[0].STATE == 0)
		    {
			if (len(&stat[SNtrackinglarge(0)],&stat[2])<300 || \
			    len($stat[SNtrackinglarge(0)],&stat[3])<300)
			{
			     printf("MOVE stat[SNtrackinglarge2(0)].X stat[SNtrackinglarge2(0)].Y 150\n");
			}
			else 
			{
			     printf("MOVE stat[SNtrackinglarge(0)].X \
				    stat[SNtrackinglarge(0)].Y 150\n");
			}
		    }
		}
	    }
	//=====defender====
	if (Stat[1].ID == 1)
	{
	    if (stat[1].X > 10000)
	    {	
		if (stat[1].STATE != 0)
		{
		    if (len(&stat[1],&stat[2]) < 300 ||\
			 len(&stat[1],&stat[3]) < 300)
		    {	
			if (len(&stat[1],&stat[0]) <= 900) 
			{   
			    printf("THROW stat[0].X stat.[0].Y 500\n");
			}
			if (len(&stat[1],&stat[0]) > 900)
			{
			    printf("THROW 16000 4800 500\n"");
			}
		    }
		    else
		    {	
			printf("THROW 16000 2500 500\n"");
		    } 		 
		}
		if (stat[0].STATE == 0)
		{
		    if (len(&stat[SNtrackingsmall(1)],&stat[2])<300 || \
			len($stat[SNtrackingsmall(1)],&stat[3])<300)
		    {
			 printf("MOVE 1000 3500 150\n");
		    }
		    else 
		    {
			 printf("MOVE stat[SNtrackingsmall(1)].X \
				stat[SNtrackingsmall(1)].Y 150\n");
		    }
		}
	    }
	    if (stat[1].X <= 10000)
	    {	
		    if (stat[1].STATE != 0)
		    {
			if (len(&stat[1],&stat[2]) < 300 ||\
			     len(&stat[1],&stat[3]) < 300)
			{	
			    if (len(&stat[1],&stat[0]) <= 900) 
			    {   
				printf("THROW stat[0].X stat.[0].Y 500\n");
			    }
			    if (len(&stat[1],&stat[0]) > 900)
			    {
				printf("THROW 16000 0 500\n"");
			    }
			}
			else
			{
			    printf("THROW 16000 4800 500\n"");
			}
		    }
		    if (stat[1].STATE == 0)
		    {
			if (len(&stat[SNtrackingsmall(1)],&stat[2])<300 || \
			    len($stat[SNtrackinglasmall(1)],&stat[3])<300)
			{
			     printf("MOVE 1000 3500 150\n");
			}
			else 
			{
			     printf("MOVE stat[SNtrackinglarge(1)].X \
				    stat[SNtrackinglarge(1)].Y 150\n");
			}
		    }
		}
	    }
	}
    ==Right side==
    if (my_team_id == 1)
    { 
	//=====attacker====
	if (Stat[0].ID == 2)
	{
	    if (stat[0].X < 8000)
	    {	
		if (stat[0].STATE != 0)
		{
		    if (len(&stat[0],&stat[2]) < 300 ||\
			 len(&stat[0],&stat[3]) < 300)
		    {	
			if (len(&stat[0],&stat[1]) <= 1100) 
			{   
			    printf("THROW stat[1].X stat.[1].Y 500\n");
			}
			if (len(&stat[0],&stat[1]) > 1100)
			{
			    printf("THROW 0 2700 500\n"");
			}
		    }
		    else
		    {	
			printf("THROW 0 4800 500\n"");
		    } 		 
		}
		if (stat[0].STATE == 0)
		{
		    if (len(&stat[SNtrackinglarge(0)],&stat[2]) < 300 || \
			len($stat[SNtrackinglarge(0)],&stat[3]) < 300)
		    {
			 printf("MOVE stat[SNtrackinglarge(0)].X stat[SNtrackinglarge(0)].Y 150\n");
		    }
		    else 
		    {
			 printf("MOVE stat[SNtrackinglarge].X \
				stat[SNtrackinglarge].Y 150\n");
		    }
		}
	    }
	    if (stat[0].X >= 8000)
	    {	
		    if (stat[0].STATE != 0)
		    {
			if (len(&stat[0],&stat[2]) < 300 ||\
			     len(&stat[0],&stat[3]) < 300)
			{	
			    if (len(&stat[0],&stat[1]) <= 1100) 
			    {   
				printf("THROW stat[1].X stat.[1].Y 500\n");
			    }
			    if (len(&stat[0],&stat[1]) > 1100)
			    {
				printf("THROW 0 7400 500\n"");
			    }
			}
			else
			{
			    printf("THROW 0 700 500\n"");
			}	
		    }
		    if (stat[0].STATE == 0)
		    {
			if (len(&stat[SNtrackinglarge(0)],&stat[2]) < 300 || \
			    len($stat[SNtrackinglarge(0)],&stat[3]) < 300)
			{
			     printf("MOVE stat[SNtrackinglarge2(0)].X stat[SNtrackinglarge2(0)].Y 150\n");
			}
			else 
			{
			     printf("MOVE stat[SNtrackinglarge(0)].X \
				    stat[SNtrackinglarge(0)].Y 150\n");
			}
		    }
		}
	    }
	//=====defender====
	if (Stat[1].ID == 3)
	{
	    if (stat[1].X < 6000)
	    {	
		if (stat[1].STATE != 0)
		{
		    if (len(&stat[1],&stat[2]) < 300 ||\
			 len(&stat[1],&stat[3]) < 300)
		    {	
			if (len(&stat[1],&stat[0]) <= 900) 
			{   
			    printf("THROW stat[0].X stat.[0].Y 500\n");
			}
			if (len(&stat[1],&stat[0]) > 900)
			{
			    printf("THROW 0 4800 500\n"");
			}
		    }
		    else
		    {	
			printf("THROW 0 2500 500\n"");
		    } 		 
		}
		if (stat[0].STATE == 0)
		{
		    if (len(&stat[SNtrackingsmall(1)],&stat[2]) < 300 || \
			len($stat[SNtrackingsmall(1)],&stat[3]) < 300)
		    {
			 printf("MOVE 15000 3500 150\n");
		    }
		    else 
		    {
			 printf("MOVE stat[SNtrackingsmall(1)].X \
				stat[SNtrackingsmall(1)].Y 150\n");
		    }
		}
	    }
	    if (stat[1].X >= 6000)
	    {	
		    if (stat[1].STATE != 0)
		    {
			if (len(&stat[1],&stat[2]) < 300 ||\
			     len(&stat[1],&stat[3]) < 300)
			{	
			    if (len(&stat[1],&stat[0]) <= 900) 
			    {   
				printf("THROW stat[0].X stat.[0].Y 500\n");
			    }
			    if (len(&stat[1],&stat[0]) > 900)
			    {
				printf("THROW 0 0 500\n"");
			    }
			}
			else
			{
			    printf("THROW 0 7000 500\n"");
			}
		    }
		    if (stat[1].STATE == 0)
		    {
			if (len(&stat[SNtrackingsmall(1)],&stat[2]) < 300 || \
			    len($stat[SNtrackinglasmall(1)],&stat[3]) < 300)
			{
			     printf("MOVE 15000 3500 150\n");
			}
			else 
			{
			     printf("MOVE stat[SNtrackinglarge(1)].X \
				    stat[SNtrackinglarge(1)].Y 150\n");
			}
		    }
		}
	    }
	}
    }


	return 0;
    }
