#include <stdio.h>

int main(void)
{
 char name[20];
 char idnum[20];
 char pnum[20];
 
 FILE *fp=fopen("/users/hyunja/project1/cbook/mystory.txt","wt");
  if(fp==NULL)
  {puts("Error! file connecting fail! haha!");
   return -1;
  }
 
 puts("Enter your name.");  
 fputs("#NAME:",fp);fgets(name,sizeof(name),stdin);fputs(name,fp);
 puts("Enter your Id number.");  
 fputs("#ID NUMBER:",fp);fgets(idnum,sizeof(idnum),stdin);fputs(idnum,fp);
 puts("Enter your phone number.");  
 fputs("#PHONE NUMBER:",fp);fgets(pnum,sizeof(pnum),stdin);fputs(pnum,fp);

 




return 0;
}

