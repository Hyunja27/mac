#include <stdio.h>

int main(void)
{

char str[50];
int i=0;

printf("문자열 입력 : ");
scanf("%s",str);
printf("입력받은 문자열 : %s \n",str);

printf("문자단위 출력 : ");
while(str[i] != 0)
{
printf("%c",str[i]);
i++;
}


return 0;
}
