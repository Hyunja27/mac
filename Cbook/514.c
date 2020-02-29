#include <stdio.h>

int main(void)
{
 int ch;
 char str[30];
 

 FILE * fp=fopen("/users/hyunja/project1/cbook/data.txt","rt");
  if(fp==NULL)
  {puts("error! file open fail! haha!");
   return -1;
  }

 ch=fgetc(fp);
 printf("%c\n",ch);
 ch=fgetc(fp);
 printf("%c\n",ch);

 fgets(str,sizeof(str),fp);
 printf("%s",str);
 fclose(fp);
 return 0;
}
