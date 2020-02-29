#include <stdio.h>

struct character 
{
 char name[20];
 char class[20];
 char level;
};


struct winlose
{
 struct character * fighter1;
 struct character * fighter2;
 int winlose;
};

int main(void)
{
struct character crlist[3];
int i;


puts("enter information of the character!");

for(i=0; i<3; i++)
{printf("name%d: ",i);
gets(crlist[i].name);
printf("class%d: ",i);
gets(crlist[i].class);
printf("level%d: ",i);
gets(&crlist[i].level);
}

for(i=0; i<3; i++)
{
printf("character %d\'s information.\n",i);
printf("name%d :",i);puts(crlist[i].name);
printf("class%d :",i);puts(crlist[i].class);
printf("level%d :",i);printf("%c",crlist[i].level);
}

struct winlose avsb={&crlist[0],&crlist[1],1};
struct winlose bvsc={&crlist[1],&crlist[2],0};
struct winlose avsc={&crlist[0],&crlist[2],1};



printf("\n%d's fight! :\n",1);
puts((avsb.fighter1)->name);puts("vs");puts((avsb.fighter2)->name);
if(avsb.winlose==0)
{
puts((avsb.fighter1)->name);puts("is Lose.");puts((avsb.fighter2)->name);puts("is win!");
}
else
{puts((avsb.fighter1)->name);puts("is win.");puts((avsb.fighter2)->name);puts("is lose!");
}









return 0;
}
