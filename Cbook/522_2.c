#include <stdio.h>

int main(void)
{
 char all[20];
 
 FILE *fp=fopen("/users/hyunja/project1/cbook/mystory.txt","wt");
  if(fp==NULL)
  {puts("Error! file connecting fail! haha!");
   return -1;
  }
 
 puts("Enter your name.");  
 fputs("#NAME:",fp);fgets(all,sizeof(all),stdin);fputs(all,fp);
 puts("Enter your Id number.");  
 fputs("#ID NUMBER:",fp);fgets(all,sizeof(all),stdin);fputs(all,fp);
 puts("Enter your phone number.");  
 fputs("#PHONE NUMBER:",fp);fgets(all,sizeof(all),stdin);fputs(all,fp);
 puts("Enter your favorite food.");  
 fputs("#FAVORITE FOOD:",fp);fgets(all,sizeof(all),stdin);fputs(all,fp);
 puts("Enter your hobby.");  
 fputs("#HOBBY:",fp);fgets(all,sizeof(all),stdin);fputs(all,fp);
 

 




return 0;
}

