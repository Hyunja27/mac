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

if(my_team_id==0){ 
  //=====attacker==== 
   if(stat[0].X>7000){
        if(stat[0].ID==0&&stat[0].STATE==0){
            if(SNtrackinglarge(0)>0){
              tmpint1=SNtrackinglarge(0);     
              tmpx=stat[tmpint1].X;
              tmpy=stat[tmpint1].Y;
              printf("MOVE %d %d 150\n",tmpx,tmpy);
                          fprintf(stderr,"=[0 Attacker move1]=\n");
            }
            else{
             if(mvskill1<3){
                                          fprintf(stderr,"=[0 Attacker move2]=\n");
              printf("MOVE 9800 1300 150\n");
              mvskill1++;}
            else if(mvskill1>=3&&mvskill1<6){
                                         fprintf(stderr,"=[0 Attacker move3]=\n");
              printf("MOVE 9800 6500 150\n");
              mvskill1++;
              if(mvskill1==6)
              mvskill1=0;}}
             }
        
        else if(stat[0].ID==0&&stat[0].STATE!=0){
    
          if(shootskill1==0){
           printf("THROW 16000 4900 500\n");
                           fprintf(stderr,"=[0 Attacker shoot1]=\n");
            shootskill1++;
            }
        
          else if(shootskill1==1){
            printf("THROW 16000 2700 500\n");
                       fprintf(stderr,"=[0 Attacker shoot2]=\n");
            shootskill1--;
            }}
      }

    else if(stat[0].X<=7000&&stat[0].STATE!=0){ 
         if(shootskill1==0){
           printf("THROW 10000 1000 500\n");
                         fprintf(stderr,"=[0 Attacker shoot3]=\n");
           shootskill1++;
           }
        
         else if(shootskill1==1){
           printf("THROW 10000 6000 500\n");
                         fprintf(stderr,"=[0 Attacker shoot4]=\n");
           shootskill1--;
           }}
       

   else if(stat[0].X<=7000&&stat[0].STATE==0){
            if(SNtrackinglarge(0)>0){
              tmpint1=SNtrackinglarge(0);     
              tmpx=stat[tmpint1].X;
              tmpy=stat[tmpint1].Y;
                          fprintf(stderr,"=[0 Attacker move4]=\n");
              printf("MOVE %d %d 150\n",tmpx,tmpy);}
           
            else{
             if(mvskill1<3){
                                          fprintf(stderr,"=[0 Attacker move5]=\n");
              printf("MOVE 9800 1300 150\n");
              mvskill1++;}
            else if(mvskill1>=3&&mvskill1<6){
                                         fprintf(stderr,"=[0 Attacker move6]=\n");
              printf("MOVE 9800 6500 150\n");
              mvskill1++;
              if(mvskill1==6)
              mvskill1=0;}}
   }
   
   
  //=====Defender===== 

    if(stat[1].X<10000){
         
        if(stat[1].ID==1&&stat[1].STATE==0){
          if(SNtrackingsmall(1)>0){
            tmpint2=SNtrackingsmall(1);     
            tmpx=stat[tmpint2].X;
            tmpy=stat[tmpint2].Y;
            
            if(tmpint1==tmpint2){  //&&stat[1].X==stat[SNtrackingsmall2(1)].X
            tmpint2=SNtrackingsmall2(1);     
            tmpx=stat[tmpint2].X;
            tmpy=stat[tmpint2].Y;
                                                     fprintf(stderr,"=[1 defender move1]=\n");
              printf("MOVE %d %d 130\n",tmpx,tmpy);}
            else{
                                                                 fprintf(stderr,"=[1 defender move2]=\n");
              printf("MOVE %d %d 130\n",tmpx,tmpy);}}
           
          else{
        if(mvskill2<3){
                                                                 fprintf(stderr,"=[1 defender move3]=\n");
           printf("MOVE 668 2900 130\n");
           mvskill2++;}
        else if(mvskill2>=3&&mvskill2<6){
                                                                 fprintf(stderr,"=[1 defender move4]=\n");
           printf("MOVE 689 4000 130\n");
           mvskill2++;
            if(mvskill2==6)
             mvskill2=0;}} }
     
        
        else if(stat[1].ID==1&&stat[1].STATE!=0){
          if(shootskill2==0){
                                                                   fprintf(stderr,"=[1 defender shot1]=\n");
          printf("THROW 14000 2000 500\n");
           shootskill2++;
           stat[1].STATE=0;}
        
         else if(shootskill2==1){
                                                                    fprintf(stderr,"=[1 defender shot2]=\n");
           printf("THROW 14000 5000 500\n");
           shootskill2--;
           stat[1].STATE=0;}}
       }

    else if(stat[1].X>=10000&&stat[1].STATE!=0){  
        if(shootskill2==0){
                                                                   fprintf(stderr,"=[1 defender shot3]=\n");
          printf("THROW 16000 2700 500\n");
           shootskill2++;
           stat[1].STATE=0;}
        
         else if(shootskill2==1){
             
                                                                                fprintf(stderr,"=[1 defender shot4]=\n");
         printf("THROW 16000 4700 500\n");
          shootskill2--;
         stat[1].STATE=0;}}
       

    else if(stat[1].X>=10000&&stat[1].STATE==0){
        if(SNtrackingsmall(1)>0){
         tmpint2=SNtrackingsmall(1);     
         tmpx=stat[tmpint2].X;
         tmpy=stat[tmpint2].Y;
    
         if(tmpint1==tmpint2){
                                                                    fprintf(stderr,"=[1 defender move5]=\n");
             printf("MOVE 789 4000 150\n");}
         else{
                                                                    fprintf(stderr,"=[1 defender move6]=\n");
          printf("MOVE %d %d 150\n",tmpx,tmpy);}}

        else{
            
            
            
            
        if(mvskill2<3){
                                          fprintf(stderr,"=[1 defender move7]=\n");
         printf("MOVE 670 4000 150\n");
         mvskill2++;}
        else if(mvskill2>=3&&mvskill1<6){
                                         fprintf(stderr,"=[1 defender move8]=\n");
         printf("MOVE 670 2900 150\n");
         mvskill2++;
         if(mvskill2==6)
         mvskill2=0;}}


           
   }
             
           
}   
       
if(my_team_id==1){ 
  
  //=====attacker==== 
   if(stat[0].X<7500){
         
        if(stat[0].ID==2&&stat[0].STATE==0){
            if(SNtrackinglarge(0)>0){
              tmpint1=SNtrackinglarge(0);     
              tmpx=stat[tmpint1].X;
              tmpy=stat[tmpint1].Y;
              printf("MOVE %d %d 150\n",tmpx,tmpy);}
           
            else{
             if(mvskill1<3){
              printf("MOVE 6000 1000 150\n");
              mvskill1++;}
            else if(mvskill1>=3&&mvskill1<6){
              printf("MOVE 6000 6000 150\n");
              mvskill1++;
              if(mvskill1==6)
              mvskill1=0;}}
           
           
        }
        
        else if(stat[0].ID==2&&stat[0].STATE!=0){
         if(shootskill1==0){
          printf("THROW 0 2500 500\n");
           shootskill1++;
           stat[0].STATE=0;}
        
         else if(shootskill1==1){
           printf("THROW 0 4700 500\n");
           shootskill1--;
           stat[0].STATE=0;}}
      }

    else if(stat[0].X>=7000&&stat[0].STATE!=0){ 
         if(shootskill1==0){
           printf("THROW 2200 6200 500\n");
           shootskill1++;
           stat[0].STATE=0;          
           }
        
         else if(shootskill1==1){
           printf("THROW 2200 800 500\n");
           shootskill1--;
           stat[0].STATE=0;
         }}
       

   else if(stat[0].X>=7000&&stat[0].STATE==0){
            if(SNtrackinglarge(0)>0){
              tmpint1=SNtrackinglarge(0);     
              tmpx=stat[tmpint1].X;
              tmpy=stat[tmpint1].Y;
              printf("MOVE %d %d 150\n",tmpx,tmpy);}
           
            else{
             if(mvskill1<3){
              printf("MOVE 6000 1000 150\n");
              mvskill1++;}
            else if(mvskill1>=3&&mvskill1<6){
              printf("MOVE 6000 6000 150\n");
              mvskill1++;
              if(mvskill1==6)
              mvskill1=0;}}
   }
   
   
  //=====Defender===== 

    if(stat[1].X>6500){
         
        if(stat[1].ID==3&&stat[1].STATE==0){
          if(SNtrackingsmall(1)>0){
            tmpint2=SNtrackingsmall(1);     
            tmpx=stat[tmpint2].X;
            tmpy=stat[tmpint2].Y;
            
            if(tmpint1==tmpint2){    //&&stat[1].X!=stat[SNtrackingsmall2(1)].X
             tmpint2=SNtrackingsmall2(1);     
            tmpx=stat[tmpint2].X;
            tmpy=stat[tmpint2].Y;
             printf("MOVE %d %d 130\n",tmpx,tmpy);}
              
            else
              printf("MOVE %d %d 130\n",tmpx,tmpy);}
           
          else{
           if(mvskill2<3){
             printf("MOVE 14800 3000 130\n");
             mvskill2++;}
           else if(mvskill2>=3&&mvskill2<6){
              printf("MOVE 14800 5000 130\n");
              mvskill2++;
               if(mvskill2==6)
                  mvskill2=0;}}  }
     
        
        else if(stat[1].ID==3&&stat[1].STATE!=0){
          if(shootskill2==0){
          printf("THROW 3500 100 500\n");
           shootskill2++;
           stat[1].STATE=0;}
        
         else if(shootskill2==1){
           printf("THROW 3500 7000 500\n");
           shootskill2--;
           stat[1].STATE=0;}}
       }

    else if(stat[1].X<=6500&&stat[1].STATE!=0){  
        if(shootskill2==0){
          printf("THROW 0 2500 500\n");
           shootskill2++;
           stat[1].STATE=0;}
        
         else if(shootskill2==1){
         printf("THROW 0 5000 500\n");
          shootskill2--;
         stat[1].STATE=0;}}
       

    else if(stat[1].X<=6500&&stat[1].STATE==0){
        if(SNtrackingsmall(1)>0){
         tmpint2=SNtrackingsmall(1);     
         tmpx=stat[tmpint2].X;
         tmpy=stat[tmpint2].Y;
    
         if(tmpint1==tmpint2)
             printf("MOVE 14500 3500 150\n");
         else
          printf("MOVE %d %d 150\n",tmpx,tmpy);}
           
        else{
         if(mvskill2<3){
          printf("MOVE 14800 5000 150\n");
          mvskill2++;}
         else if(mvskill2>=3&&mvskill1<6){
          printf("MOVE 14800 3000 150\n");
          mvskill2++;
         if(mvskill2==6)
          mvskill2=0;}}


    }
   }
        
    }
    return 0;
}
