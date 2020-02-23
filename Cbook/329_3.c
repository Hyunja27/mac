#include <stdio.h>

int main(void)
{
int arr[10];
int num1,odd=0,even=0,i;

for(i=0; i<10; i++)
{
scanf("%d",&num1);

if(num1%2==0)
{
arr[9-even]=num1;
even++;
}
else
{
arr[0+odd]=num1;
odd++;
}
}
printf("array is ");

for(i=0; i<10; i++)
{
printf("[%d]",arr[i]);
}


}
