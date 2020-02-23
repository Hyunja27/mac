#include <stdio.h>


void showall(int arr[])
{
int i;
for(i=0; i<10; i++)
printf("%d ",arr[i]);
}

void odd(int arr[])
{
int i;
printf("\nodd is : ");
for(i=0; i<10; i++)
{
if(arr[i]%2!=0)
printf("%d ",arr[i]);
}
}


void dw(int arr[])
{
int i;
printf("\ndw is : ");
for(i=0; i<10; i++)
{
if(arr[i]%2==0)
printf(" %d",arr[i]);
}
}


int main(void)
{
int arr1[10];
int i;

for(i=0; i<10; i++)
scanf("%d",&arr1[i]);

showall(arr1);
odd(arr1);
dw(arr1);

return 0;
}

