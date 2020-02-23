#include <stdio.h>

void SquarebyValue(int num1)
{
int a;
a=num1*num1;

printf("Square by value : %d", a);
}

void squarebyreference(int * ptr1)
{
*ptr1=*(ptr1)**(ptr1);
}


int main(void)
{

int num1=9;

SquarebyValue(num1);

printf("\n\nbefore square by reference : %d",num1);

squarebyreference(&num1);

printf("\n\nsquare by reference : %d",num1);

return 0;
}
