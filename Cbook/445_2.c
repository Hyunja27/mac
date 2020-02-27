#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
char str1[20];
char str2[20];
char str3[40];

fgets(str1,sizeof(str1),stdin);
str1[6]=0;
fgets(str2,sizeof(str2),stdin);
str2[6]=0;

strcpy(str3,str1);
strcat(str3,str2);

fputs(str3,stdout);
puts("\n\n");
puts(str3);

return 0;
} 
