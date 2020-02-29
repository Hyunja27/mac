#include <stdio.h>

int main(void)
{
 char all[50];
 int i;

 FILE *fp=fopen("/users/hyunja/project1/cbook/mystory.txt","rt");
  if(fp==NULL)
  {puts("Error! file connecting fail! haha!");
   return -1;
  }


 while(1)
 {
   fgets(all,sizeof(all),fp);
    if(feof(fp))break;
   printf("%s",all); 
 }

fclose(fp); 
return 0;
}

