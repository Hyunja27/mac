#include <stdio.h>
#include <stdlib.h>

typedef struct
{
 char title[50];
 char auther[50];
 int page;
}BOOK;


int main(void)
{
 int i;
 BOOK * ptrlist[3];
 
 BOOK* list=(BOOK*)malloc(sizeof(BOOK));

 ptrlist[0]=&list[0]; 
 ptrlist[1]=&list[1]; 
 ptrlist[2]=&list[2]; 


 puts("input 3 Book\'s title,auther,page.");

 for(i=0; i<3; i++)
 {
 printf("[Book num %d]\n",i+1);
 puts("title:"); 
 gets(ptrlist[i]->title);
 puts("auther:"); 
 gets(ptrlist[i]->auther);
 puts("page:");
 scanf("%d",&ptrlist[i]->page);
 getchar();
 }
 
  puts("\n3 books that you input is");

 for(i=0; i<3; i++)
 {
 printf("[Book num %d]\n",i+1);
 printf("title:"); puts(ptrlist[i]->title);
 printf("auther:"); puts(ptrlist[i]->auther);
 printf("page:"); printf("%d\n",ptrlist[i]->page);
 }
 

return 0;
}
