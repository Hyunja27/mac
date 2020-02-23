#include <stdio.h>

void swap(int * ptr1, int *ptr2, int * ptr3)
{
int temp;

temp=*ptr3;
*ptr3=*ptr2;
*ptr2=*ptr1;
*ptr1=temp;
}

int main(void)
{


int a=35,b=50,c=65;

printf("1st: %d %d %d",a,b,c);

swap(&a,&b,&c);

printf("2nd: %d %d %d",a,b,c);

return 0;
}


