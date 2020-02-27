#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convtoint(char c)
{
 static int diff=1-'1';
 return c+diff;
 printf("%d",diff);
}

int main(void)
{
char str[50];
int i,len;
int sum=0;
 static int diff=1-'1';
 printf("diff: %d\n\n",diff);

fgets(str,sizeof(str),stdin);
len=strlen(str);

for(i=0; i<len; i++)
{
 if('1'<=str[i]&&str[i]<='9')
 {printf("%d",str[i]);
 sum +=str[i]-48;
 }
}

printf("\n\n sum : %d",sum);



return 0;
}
