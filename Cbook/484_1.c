#include <stdio.h>

typedef struct point
{
 int xpos;
 int ypos; 
}Point;

Point getpoint(Point pos)
{ 
 puts("enter Xpoint and Y Point.");
 scanf("%d%d",&pos.xpos,&pos.ypos);
 return pos;
}

void swappoint(Point *pos1, Point *pos2)
{
 Point point1;
 Point *cmppoint=&point1;
 
 cmppoint->xpos=(*pos1).xpos;
 cmppoint->ypos=(*pos1).ypos;
 pos1->xpos=(*pos2).xpos;
 pos1->ypos=(*pos2).ypos;
 pos2->xpos=(*cmppoint).xpos;
 pos2->ypos=(*cmppoint).ypos;
}

int main(void)
{Point pos[2];
 int i; 

for(i=0; i<2; i++)
{
 pos[i]=getpoint(pos[i]);
}

swappoint(&pos[0],&pos[1]);

for(i=0; i<2; i++)
{
 printf("%d\'s point:",i);printf("X:%d Y:%d\n",pos[i].xpos,pos[i].ypos);
}




return 0;
} 
