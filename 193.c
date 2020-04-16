#include <stdio.h>
#include <string.h>

int main(void)
{char count=0,i,str[5][101];
 char checkarr[100],checkch;
 
 for(i=0; i<5; i++)
  fgets(str[i],100,stdin);

  scanf("%c %s",&checkch,checkarr);

 for(i=0; i<5; i++){
  if(strstr(str[i],checkarr)!=NULL||strchr(str[i],checkch)!=NULL){
   printf("%s",str[i]);
   count++;
  }
  }

 if(count==0)
  printf("None");

 
return 0;
}
