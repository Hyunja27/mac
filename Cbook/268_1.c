#include <stdio.h>

int main(void)
{
char str[40];
int a=0;
int i;

scanf("%s",str);

for(i=0; str[i]!=0; i++)
{
a++;
}

printf("\n\n입력한 영단어의 크기: %d",a);




return 0;
}
