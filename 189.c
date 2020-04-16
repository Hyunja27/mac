#include <stdio.h>
#include <string.h>

int main(void)
{char i,j,str[101];

gets(str);

int wordend=strlen(str);

for(i=100; i>=0; i--){
 if(str[i]==32){
  for(j=i+1; j<wordend; j++)
   printf("%c",str[j]);

  puts("");
  wordend=i; 
 }
 else if(i==0){
  for(j=i; j<wordend; j++)
   printf("%c",str[j]);

  puts("");
  wordend=i; 
} 

}

return 0;
}

