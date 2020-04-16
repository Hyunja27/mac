#include <stdio.h>
#include <stdlib.h>

void input(int *a)
{int i;

for(i=0; i<10; i++)
 scanf("%d",&a[i]);
}


int main(void)
{int i,len,max,min;

scanf("%d",&len);

int arr[len]; 

arr[len]=(int)malloc(sizeof(int)*len);

for(i=0; i<len; i++){
 scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];

for(i=0; i<len; i++){
 if(max<arr[i])
  max=arr[i];

 if(min>arr[i])
  min=arr[i];
}

printf("max : %d\nmin : %d",max,min);

return 0;
}
