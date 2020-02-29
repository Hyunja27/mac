#include <stdio.h>

int main(void)
{
 int ch,i;

 FILE * fp=fopen("/users/hyunja/project1/cbook/data.txt","rt");
  if(fp==NULL)
  {puts("error! file open fail! haha!");
   return -1;
  }
 
 for(i=0; i<5; i++)
 {
  ch=fgetc(fp);
  printf("%c \n",ch);
 } 

 fclose(fp);
 return 0;
}
