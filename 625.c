#include <stdio.h>

void input(int *a,int len){
int i;

for(i=0; i<len; i++)
 scanf("%d",a+i);
}

void reroll(int *a,int len){
int i,count,tmp;

printf("\n==reroll in!==\n");

count=0;

while(count<len){
 for(i=0; i<len-1-count; i++){
  if(a[i]<a[i+1]){
   tmp=a[i];
   a[i]=a[i+1];
   a[i+1]=tmp;
  }
 }
count++;
}
}




int main(void){
int i,len;

scanf("%d",&len);

int arr[len],*arrp;

arrp=arr;
input(arrp,len);
reroll(arrp,len);

for(i=0; i<len; i++)
 printf("%d ",arr[i]);

return 0;
}
