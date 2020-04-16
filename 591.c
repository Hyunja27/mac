#include <stdio.h>

int len=2,til=0,result=0;

void tream(int arr[])
{
 
 arr[0]=1;
 arr[len-1]=arr[(len/2)-1]+arr[len-2];
 result=arr[len-1]; 
 
 if(len<til){
  len++;
  tream(arr);}  
  
}

int main(void)
{int arr1[50]={0};

scanf("%d",&til);

tream(arr1);

printf("%d",result);
return 0;
}
