#include <stdio.h>
#include <string.h>

int main(void){
char str1[101];
char str2[101];

fgets(str1,100,stdin);
fgets(str2,100,stdin);

if(strlen(str1)>strlen(str2)){
fprintf(stdout,"%s",str2);
fprintf(stdout,"%s",str1);
}
else if(strlen(str1)<strlen(str2)){
fprintf(stdout,"%s",str1);
fprintf(stdout,"%s",str2);
}


return 0;
}
