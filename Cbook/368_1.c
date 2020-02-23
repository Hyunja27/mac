#include <stdio.h>

void maxandmin(int ** dptr1, int ** dptr2,int arr1[],int len)
{

 if(arr1[0]>arr1[1]&&arr1[0]>arr1[2]&&arr1[0]>arr1[3]&&arr1[0]>arr1[4])
 *dptr1=&arr1[0];
 else if(arr1[1]>arr1[0]&&arr1[1]>arr1[2]&&arr1[1]>arr1[3]&&arr1[1]>arr1[4])
 *dptr1=&arr1[1];
 else if(arr1[2]>arr1[1]&&arr1[2]>arr1[0]&&arr1[2]>arr1[3]&&arr1[2]>arr1[4])
 *dptr1=&arr1[2];
 else if(arr1[3]>arr1[1]&&arr1[3]>arr1[2]&&arr1[3]>arr1[0]&&arr1[3]>arr1[4])
 *dptr1=&arr1[3];
 else
 *dptr1=&arr1[4];

 
 if(arr1[0]<arr1[1]&&arr1[0]<arr1[2]&&arr1[0]<arr1[3]&&arr1[0]<arr1[4])
 *dptr2=&arr1[0];
 else if(arr1[1]<arr1[0]&&arr1[1]<arr1[2]&&arr1[1]<arr1[3]&&arr1[1]<arr1[4])
 *dptr2=&arr1[1];
 else if(arr1[2]<arr1[1]&&arr1[2]<arr1[0]&&arr1[2]<arr1[3]&&arr1[2]<arr1[4])
 *dptr2=&arr1[2];
 else if(arr1[3]<arr1[1]&&arr1[3]<arr1[2]&&arr1[3]<arr1[0]&&arr1[3]<arr1[4])
 *dptr2=&arr1[3];
 else
 *dptr2=&arr1[4];
}

int main(void)
{
int * maxptr;
int * minptr;

int arr[5]={19,47,8,28,1};

maxptr=&arr[3];
minptr=arr;


printf("maxptr : %p\n",maxptr);
printf("minptr : %p",minptr);

maxandmin(&maxptr,&minptr,arr,sizeof(arr)/sizeof(int));


printf("\n\n===============\n%p %p %p %p %p\n\n",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

printf("maxptr : %p\n",maxptr);
printf("minptr : %p",minptr);



return 0;
}
