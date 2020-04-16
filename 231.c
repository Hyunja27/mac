#include <stdio.h>

int len=1;
 
void yun(int arr[])
{
  arr[len]=arr[len-1]/2;
 
  if(arr[len-1]/2>1){
   len++;
   yun(arr);}
}

int main(void)
{int num1,arr[30],i;


scanf("%d",&num1);

arr[0]=num1;

yun(arr);

for(i=len; i>=0; i--)
 printf("%d ",arr[i]);
 
return 0;
}
