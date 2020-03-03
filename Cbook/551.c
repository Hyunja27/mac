#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
 int i,cnt,len;
  
puts("Enter the lenght of your string that you want type.");
scanf("%d",&cnt);
getchar(); 
 
char * ptr1=(char*)malloc(sizeof(char)*cnt+1);

puts("Enter your string.");

gets(ptr1);

puts("string that you enter is :");
puts(ptr1);
puts("string lenght is :");
printf("%lu\n",strlen(ptr1));
len=strlen(ptr1);

puts("opposit printing is :");

for(i=len; i>=0; i--)
 {
  if(ptr1[i]==' ')
   {printf("%s\n",&ptr1[i]+1);
    ptr1[i]=0; 
   }
 }
printf("%s",&ptr1[0]);


free(ptr1);
return 0;
}
