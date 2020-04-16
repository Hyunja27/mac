#include <stdio.h>
#include <string.h>

int lenth;

void strprint(char arr[], int len)
{int i;

  for(i=len-1; i<lenth; i++)
  printf("%c",arr[i]);

  for(i=0; i<len-1; i++)
  printf("%c",arr[i]);
  
  puts("");

  if(len==1)
  return ;

  strprint(arr,len-1);
}


int main(void){

char str[100];
gets(str);
lenth=strlen(str);
strprint(str,strlen(str));
  
return 0;
}
