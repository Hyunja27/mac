#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
char str1[40];
char str2[40];
int str3,str1len,str2len,str3len;


gets(str1);
gets(str2);
str3=getchar();


//strcpy(str1,str2);
strcat(str1,str2);



puts(str1);
fputs(str2,stdout);
printf("%c\n\n",str3);

str1len=strlen(str1);
str2len=strlen(str2);
str3len=sizeof(str3)/sizeof(int);




printf("str1 lenght : %d \n",str1len);
printf("str2 lenght : %d \n",str2len);
printf("str3 lenght : %d \n",str3len);







return 0;
}

