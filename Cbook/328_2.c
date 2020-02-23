#include <stdio.h>

int main(void)
{
int num1,num2,a=0,i;
int arr[20];

scanf("%d",&num1);
num2=num1;

while(1)
{
arr[a]=num1%2;
num1=num1/2;
a++;

if(num1<1)
break;
}

printf("arr check : %d %d %d %d and A is %d",arr[0],arr[1],arr[2],arr[3],a);

printf("\n\nnum1 is %d \n its binary is ",num2);

for(i=a-1; i>=0; i--)
{
printf("[%d]",arr[i]);
}


return 0;
}
