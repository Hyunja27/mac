#include <stdio.h>

int main(void)
{
int arr1[5];
int a,i;

scanf("%d %d %d %d %d",&arr1[0],&arr1[1],&arr1[2],&arr1[3],&arr1[4]);

if(arr1[0]>arr1[1]&&arr1[0]>arr1[2]&&arr1[0]>arr1[3]&&arr1[0]>arr1[4])
printf("largest = %d",arr1[0]);
else if(arr1[1]>arr1[0]&&arr1[1]>arr1[2]&&arr1[1]>arr1[3]&&arr1[1]>arr1[4])
printf("largest = %d",arr1[1]);
else if(arr1[2]>arr1[0]&&arr1[2]>arr1[1]&&arr1[2]>arr1[3]&&arr1[2]>arr1[4])
printf("largest = %d",arr1[2]);
else if(arr1[3]>arr1[0]&&arr1[3]>arr1[1]&&arr1[3]>arr1[2]&&arr1[3]>arr1[4])
printf("largest = %d",arr1[3]);
else
printf("largest = %d",arr1[4]);

printf("\n");


if(arr1[0]<arr1[1]&&arr1[0]<arr1[2]&&arr1[0]<arr1[3]&&arr1[0]<arr1[4])
printf("lowest = %d",arr1[0]);
else if(arr1[1]<arr1[0]&&arr1[1]<arr1[2]&&arr1[1]<arr1[3]&&arr1[1]<arr1[4])
printf("lowest = %d",arr1[1]);
else if(arr1[2]<arr1[0]&&arr1[2]<arr1[1]&&arr1[2]<arr1[3]&&arr1[2]<arr1[4])
printf("lowest = %d",arr1[2]);
else if(arr1[3]<arr1[0]&&arr1[3]<arr1[1]&&arr1[3]<arr1[2]&&arr1[3]<arr1[4])
printf("lowest = %d",arr1[3]);
else
printf("lowest = %d",arr1[4]);

for(i=0; i<5; i++)
a+=arr1[i];

printf("\ntotal = %d",a);

return 0;
}
