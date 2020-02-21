#include <stdio.h>

int main(void)
{
int arr[5]={1,2,3,4,5};
int * ptr1=arr;
int i;

printf("%d %d %d %d %d",*(arr),*(arr+1),*(arr+2),*(arr+3),*(arr+4));

for(i=0; i<5; i++)
{
*(arr+i)+=2;
}
printf("\no o o\n%d %d %d %d %d",*(arr),*(arr+1),*(arr+2),*(arr+3),*(arr+4));


return 0;
}
