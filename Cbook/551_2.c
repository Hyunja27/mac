#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i=0;
int j=0;
int sz=5;
int tmp;
int*num=(int*)malloc(sizeof(int)*sz);



while(1){
 puts("enter number waht you want :");scanf("%d",&tmp);
  if(tmp==-1)
   break;
 
  if((i+1)*4>sz)
   num=(int*)realloc(num,sizeof(int)*(sz+3));
 
 num[i]=tmp; 
 i++;
}

puts("number that you type : ");

for(j=0; j<i+1; j++)
printf("%d\n",num[j]);





return 0;
}
