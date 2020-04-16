#include <stdio.h>
#include <string.h>

int main(void)
{char i,j,check,count=0,str[5][10];

for(i=0; i<5; i++)
 gets(str[i]);

scanf("%c",&check);

for(i=0; i<5; i++){
 if(str[i][1]==check){
  printf("%s\n",str[i]);
  count++;
  }
  if(str[i][1]!=check&&str[i][2]==check){
  printf("%s\n",str[i]);
  count++;
  }
}
printf("%d",count);

return 0;
}
