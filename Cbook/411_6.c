#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int a,b,c,ca,cb,cc;
int i,t=0;
int s=0,bb=0;

printf("play Guess 3 number! \n get 3 another number, than i will say strike or ball!\n(strike: num & order correct!   ball: num correct, order incorrect!\n\n ");

srand((int)time(NULL));

for(i=0; i<99999999; i++)
{
ca=rand()%10;
cb=rand()%10;
cc=rand()%10;

if(ca!=cb||ca!=cc||cb!=cc)
 break;
}

printf("let\'s go! say 3 numbers in order!\n");

for(i=0; i<999; i++)
{
s=0;
bb=0;
t++;
printf("\n%d try: type 3 numabers!\n",t);
scanf("%d%d%d",&a,&b,&c);

if(a==ca)
 s++;
else if(a==cb||a==cc)
 bb++;
else 
 s=s; 

if(b==cb)
 s++;
else if(b==ca||b==cc)
 bb++;
else
 s=s;

if(c==cc)
 s++;
else if(c==cb||c==ca)
 bb++;
else
 s=s;

printf("%3d strike! %3d ball!\n",s,bb);

if(s==3)
 {printf("good job!\n macbook\'s answer : %2d %2d %2d \n your answer : %2d %2d %2d\n\n good work!",ca,cb,cc,a,b,c);
break;}

}







return 0;
}
