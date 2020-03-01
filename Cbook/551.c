#include <stdio.h>
#include <stdlib.h>

char * inputstr(char n1)
{ 
int t=n1,i;
char * ptr1=(char*)malloc(sizeof(char)*t);

gets(ptr1);

return ptr1;
}



int main(void)
{
 char ch,l;
 int i;
 char*str;

puts("Enter the lenght of your string that you want type.");
ch=getchar();
l=ch;; 

puts("Enter your string.");
str=inputstr(ch);


puts("num1 is :");printf("%d\n",ch);
puts("str[] is :"); 
 for(i=0; i<ch+1; i++ )
 printf("%c",str[i]);
puts("\n");


for(i=0; i<ch+1; i++)
{ printf("%c",str[i]);
  if(str[i]==32)
   puts("\n");
}

return 0;
}
