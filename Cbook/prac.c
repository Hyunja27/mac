#include <stdio.h>

int main(void)
{

int * arr1[5];
int * arr2[3][5];

int ** dptr1=arr1;
int ** parr[5];
parr=arr1;





printf("%p %p",dptr1,parr[0]);


return 0;
}
