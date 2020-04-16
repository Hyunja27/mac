#include <stdio.h>
#include <string.h>

int main(void)
{char i,j,count=0,arr[201];

gets(arr);

for(i=0; i<strlen(arr); i++){
 if(arr[i]==32){
  for(j=i; j<strlen(arr); j++)
   arr[j]=arr[j+1];
 }
}

for(i=0; i<strlen(arr); i++){
 if(count==3){
  puts("");
  count=0;}

 printf("%c",arr[i]);
 count++;
}

return 0;
}
