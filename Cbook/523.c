#include <stdio.h>

int main(void)
{
 char name[10];
 char sex;
 int age;

 FILE*fp=fopen("/users/hyunja/project1/cbook/friend.txt","wt");
 int i;

 for(i=0; i<3; i++)
{
 printf("input name, sex, age:");
 scanf("%s %c %d",name,&sex,&age);
 getchar();
 fprintf(fp,"%s %c %d",name,sex,age);

}

fclose(fp);
return 0;
}
