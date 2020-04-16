#include <stdio.h>
#include <string.h>

int main(void)
{char str[100];
 int i,j=0,erase;
 
 gets(str);

 printf("[1st len : %lu]\n",strlen(str));
  
while(1)
{ scanf("%d",&erase);
  
  if(erase>strlen(str))
   erase=strlen(str);
  
  for(i=erase-1; i<strlen(str); i++)
   str[i]=str[i+1];

  printf("[2st, After erase len : %lu]\n",strlen(str));

  for(i=0; i<strlen(str); i++)
   printf("%c",str[i]);
  
  if(j==strlen(str)-1)
   break;
 }
 
return 0;
}
