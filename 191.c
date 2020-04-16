#include <stdio.h>
#include <string.h>

int main(void)
{char i,count=0,str[50][100];

for(i=0; i<50; i++){
 gets(str[i]);
 if(str[i][0]==48)
  break;

 count++; 
 }

printf("%d\n",count);

for(i=0; i<=count; i++){
 if(str[i][0]==48)
  break; 

 printf("%s\n",str[i]);
 i++;
}

return 0;
}
