#include <stdio.h>

int main(void)
{
int arr1[6]={1,2,3,4,5,6};
int * ptr1=&arr1[0];
int * ptr2=&arr1[5];

printf("At first, array is %d %d %d %d %d %d\n\n",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4],arr1[5]);

*(ptr1)=*(ptr2);
*(ptr1+1)=*(ptr2-1);
*(ptr1+2)=*(ptr2-2);
*(ptr2-2)=3;
*(ptr2-1)=2;
*(ptr2)=1;

printf("Now, changed array is %d %d %d %d %d %d\n\n",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4],arr1[5]);



return 0;
}
