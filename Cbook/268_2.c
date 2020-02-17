#include <stdio.h>

int main(void)
{
char str[40];
char rts[40];
int a=1,i,i2=0;


scanf("%s",str);

while(str[i2]!=0)
{
i2++;
}

for(i=0; str[i]!=0; i++)
{
rts[i2-a]=str[i];
a++;
}


printf("입력받은문자:%s 문자수: %d\n\n",str,i2);
printf("%s",rts);

return 0;
}
