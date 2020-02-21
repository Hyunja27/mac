#include <stdio.h>

int main(void)
{
int arr1[5]={1,2,3,4,5};
int * ptr1=&arr1[4];
int num1=0,i;


for(i=0; i<5; i++)
{
num1+=*(ptr1);

printf("\n==I just Plus %d.==\n",*(ptr1));
ptr1-=1;

}

printf("\ntotal numder is %d",num1);

return 0;
}
