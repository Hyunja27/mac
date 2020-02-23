#include <stdio.h>

void pal(char arr[],int len)
{
int i;
for(i=0; i<len; i++)
{
if(arr[i]==arr[len-1-i])
printf("scanning..(%d st capital correct!)\n",i);
else
{
printf("its not palindom.");
break;
}
}

if(i==len)
printf("its a palindom.");
}


int main(void)
{
char arr[50];
int i=0,len=0;

scanf("%s",arr);

while(arr[i]!=0)
{
len=i+1;
i++;
}


printf("you input %s\nlenght is %d",arr,len);

pal(arr,len);

return 0;
}
