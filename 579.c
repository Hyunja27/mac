#include <stdio.h>


void organizer(int a[10], int len)
{int i,k,tmp;

for(k=1; k<len; k++){
 for(i=1; i<len; i++){
 if(a[i-1]<a[i]){
  tmp=a[i-1];
  a[i-1]=a[i];
  a[i]=tmp;
}
}
}



}




int main(void)
{int num[10]={0},i,len;

scanf("%d",&len);

for(i=0; i<len; i++)
 scanf("%d",&num[i]);

 organizer(num,len);

for(i=0; i<len; i++) 
printf("%d ",num[i]);

return 0;
}
