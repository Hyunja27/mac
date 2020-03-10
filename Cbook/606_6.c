#include <stdio.h>
#include <stdlib.h>

struct phnum
{
 char name[20];
 char phnum[20];
} PHNUM;

void inputfunc(PHNUM * ph)
{
 puts("enter name."); 
 gets(ph->name);
 puts("enter Phone number."); 
 gets(ph->phnum);
}

void deletefunc(PHNUM * ph)
{
 char de[20]
 int i;
 puts("enter name for name."); 
 gets(de); 

 for(i=0; i<30; i++)
 {if(de==ph[i]->name)
   {ph[i]->name=0;
    ph[i]->phnum=0;
    break;
   }
  else
   puts("that name is not  in here!");
 }
}



int main(void)
{ 
PHNUM * ph = (PHNUM*)malloc(sizeof(PHNUM)*30);
PHNUM list[30];
int i;

for(i=0; i<30; i++)
ph[i]=&list[i];

while(1){
int u;
 puts("=====MENU=====");
 puts("1.Insert");
 puts("2.Delete");
 puts("3.Search");
 puts("4.Print All");
 puts("5.Exit");
 puts("chose the func. :");
 scanf("%d",u);

switch(u){
 case '1' :
       inputfunc(&ph);
 case '2' :
         ;
 case '3' :
  ;
 case '4' :
  ;
 case '5' :
  ;
}


}
return 0;
}
