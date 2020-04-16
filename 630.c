#include <stdio.h>

int main(void){
int i,len;

fscanf(stdin,"%d",&len);

char str[len+1][100];

for(i=0; i<len+1; i++)
 fgets(str[i],100,stdin);

for(i=len; i>=0; i--)
fprintf(stdout,"%s",str[i]);

return 0;
}
