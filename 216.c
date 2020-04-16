#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{char i,str[21];

while(1){
 scanf(" %s",str);

 if(strstr(str,"END")!=0&&strlen(str)==3)
  break;
 
 for(i=strlen(str)-1; i>=0; i--)
  printf("%c",str[i]);

 puts("");
}
return 0;
}
