#include <stdio.h>

typedef struct pasta
{
 char myun[20];
 char souce[20];
 char meat[20];
 int salt;
}Pasta;


int sizefile(FILE *fp)
{
long size;
long fpos;
fpos=ftell(fp);

fseek(fp,0,SEEK_END);
size=ftell(fp);
fseek(fp,fpos,SEEK_SET); 

return size;
}


int main(void)
{
  
 Pasta alio={"angel hair", "oil and galic", "hanwu",40};
 int size; 
FILE*fp=fopen("/users/hyunja/project1/cbook/Pasta.txt","wt");
 if(fp==NULL)
  puts("file connecting error! haha!");

 fputs("#kind of myun:",fp);fputs(alio.myun,fp);fputs("\n",fp);
 fputs("#kind of souce:",fp);fputs(alio.souce,fp);fputs("\n",fp);
 fputs("#kind of meat:",fp);fputs(alio.meat,fp);fputs("\n",fp);
 fputs("#lots of salt:",fp);fputc(alio.salt,fp);fputs("\n",fp);

 size=sizefile(fp);
 puts("the size of Pasta.txt is :");printf("%d",size);
 

fclose(fp);
return 0;
}
