#include <stdio.h>

int main(void)
{
int arr1[]={0,3,7,90};

printf("name of arr1 : %p\n", arr1);
printf("name of arr1[1] : %p\n", &arr1[0]);
printf("name of arr1[2] : %p\n", &arr1[1]);
printf("name of arr1[3] : %p\n", &arr1[2]);
printf("name of arr1[4] : %p\n", &arr1[3]);
printf("name of arr1[5] : %p\n", &arr1[4]);



return 0;
}
