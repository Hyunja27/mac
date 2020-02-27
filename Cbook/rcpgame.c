#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int p,c,i,w=0;
int d=0;

printf("lets rock,scissor,paper! until you defeat..huhu..By macbook\n");

for(i=0; i<999; i++)
{
printf("which one will you choose? enter the number!\n\n 1:rock 2:scissor 3:paper \n\n");
scanf("%d",&p);

srand((int)time(NULL));
c=rand()%4+1;

if(p==1&&c==2)
 {printf("macbook show scissor! you win!\n");
  w++;}
else if(p==1&&c==3)
 {printf("macbook\'s paper is big! you  Lose! ah...\n");
 break;}
else if(p==2&&c==1)
 {printf("macbook throw th rock! you Lose! shit!\n");
 break;}
else if(p==2&&c==3)
 {printf("macbook\'s paper is cutted. you win! haha!!\n");
  w++;}
else if(p==3&&c==1)
 {printf("macbook\'s rock covered by you! you win! wow!\n");
  w++;}
else if(p==3&&c==2)
 {printf("macbook\'s scissor is so sharpe! you Lose! ...what the scissor??\n");
 break;}
else 
 {printf("macbook show the same thing that you choose! draw!\n\n");
  d++;}
}

printf("\n===============\ntotal->\n win:%4d !\ndraw:%4d  ",w,d); 









return 0;
}
