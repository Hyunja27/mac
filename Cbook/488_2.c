#include <stdio.h>

typedef struct point
{
 int xpos;
 int ypos;

}Point;

typedef struct rectangle
{
 Point a;
 Point b;
}Rec;

void getpoint(Point *pos)
{
 puts("input point\'s X,Y number.");
 scanf("%d %d",&pos->xpos,&pos->ypos);
}

void putpoint(Point pos)
{
puts("point :");
printf("X: %d  Y: %d\n",pos.xpos,pos.ypos);
} 

int recarea(Rec * rec1)
{
 int a,b,result;
 if((rec1->a).xpos>(rec1->b).xpos)
  a=(rec1->a).xpos-(rec1->b).xpos;
 else 
  a=(rec1->b).xpos-(rec1->a).xpos;

 if((rec1->a).ypos>(rec1->b).ypos)
  b=(rec1->a).ypos-(rec1->b).ypos;
 else 
  b=(rec1->b).ypos-(rec1->a).ypos;

 result= a*b;
 
 if(result<0)
 result=result*-1;

 return result;
}

void fourpoint(Rec * rec1)
{ Point c,d;
 
 if((rec1->a).xpos>(rec1->b).xpos)
  c.xpos=(rec1->a).xpos;
 else 
  c.xpos=(rec1->b).xpos;
 
 if((rec1->a).ypos>(rec1->b).ypos)
  c.ypos=(rec1->b).ypos;
 else 
  c.ypos=(rec1->a).ypos;

  if((rec1->a).xpos>(rec1->b).xpos)
  d.xpos=(rec1->b).xpos;
 else 
  d.xpos=(rec1->a).xpos;
 
 if((rec1->a).ypos>(rec1->b).ypos)
  d.ypos=(rec1->a).ypos;
 else 
  d.ypos=(rec1->b).ypos;
 
 puts("1st point:");printf("X: %d Y: %d\n\n",(rec1->a).xpos,(rec1->a).ypos);
 puts("2st point:");printf("X: %d Y: %d\n\n",(rec1->b).xpos,(rec1->b).ypos);
 puts("3st point:");printf("X: %d Y: %d\n\n",c.xpos,c.ypos);
 puts("4st point:");printf("X: %d Y: %d\n\n",d.xpos,d.ypos);
}



int main(void)
{

Point pos1,pos2;
int i,area;

puts("1st point");getpoint(&pos1);
puts("2nd point");getpoint(&pos2);

Rec rec1={pos1,pos2};

puts("rectangle\'s two point is :");
puts("1st point\'s num");putpoint(pos1);
puts("2nd point\'s num");putpoint(pos2);

area=recarea(&rec1);

printf("\n\nRectangle\'s area is : %d",area);
puts("\n the point of rectangle is :");
fourpoint(&rec1);




return 0;
}

