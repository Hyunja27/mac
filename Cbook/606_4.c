#include <stdio.h>

int main(void)
{
int i,cnt=0,indic;
char word[30];

FILE *fp=fopen("for604_4.txt","rt");
if(fp==NULL)
 puts("woops! file openning is Fail...haha...");



puts("the first cnt is:");
printf("%d",cnt);

 while(1)
{
 indic=fgetc(fp);
 if(indic=='A'||indic=='P')
 { fscanf(fp,"%s",word);
   printf("%s\n",word);
  cnt++;}
 if(feof(fp)!=0)
 break;
}

puts("the word that start with A and P \'s count is :");
printf("%d",cnt);



return 0;
}
