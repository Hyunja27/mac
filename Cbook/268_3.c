#include <stdio.h>

int main(void)
{
char arr[50];
int a=0,i;

scanf("%s",arr);

for(i=0; arr[i]!=0; i++)
{

if(arr[i]>a)
a=arr[i];

} 

printf("가장 큰 아스키코드문자 :%c / %d",a,a);



}
