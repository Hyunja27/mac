#include <stdio.h>

int main(void)
{
int arr[5]={1,2,3,4,5};
int * ptr1=arr;
int i;

printf("%d %d %d %d %d\n=============\n",*(ptr1),*(ptr1+1),*(ptr1+2),*(ptr1+3),*(ptr1+4));

for(i=0; i<5; i++)
{

*(ptr1)+=2;
printf("%d ",*(ptr1));

ptr1+=1;
}
ptr1-=1;

printf("\n\n%d",*(ptr1));

return 0;
}
