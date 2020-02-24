#include <stdio.h>

void show1(int * arrp1,int len)
{
int i;

for(i=0; i<8; i++)
{
printf(" [%d]",arrp1[i]);
}
printf("\n\n");
}

void show2(int arrp2[],int len)
{
int i;

for(i=0; i<4; i++)
{
printf(" [%d]",arrp2[i]);
}

}

void add(int arr[],int len,int n1)
{
int i;;
for(i=0; i<len; i++)
{
arr[i]+=n1;
}

}

void level(int **dptr1,int **dptr2)
{
int *temp;

temp=*dptr1;
*dptr1=*dptr2;
*dptr2=temp;

**dptr1+=400;
**dptr2+=600;
}


int main(void)
{
int arr1[8];
int arr2[4];
int i;

int * ptr1=arr1;
int * ptr2=arr2;

for(i=0; i<8; i++)
{
scanf("%d",&arr1[i]);
}

for(i=0; i<4; i++)
{
scanf("%d",&arr2[i]);
}

show1(arr1,sizeof(arr1)/sizeof(int));
show2(arr2,sizeof(arr2)/sizeof(int));

printf("\n\n=======after add.....======\n\n");

add(arr1,sizeof(arr1)/sizeof(int),10);
add(arr2,sizeof(arr2)/sizeof(int),20);


show1(arr1,sizeof(arr1)/sizeof(int));
show2(arr2,sizeof(arr2)/sizeof(int));


printf("\n\n\n = pointing %d, %d =\n",*ptr1,*ptr2);



printf("\n\n=======after levelup.....======\n\n");
level(&ptr1,&ptr2);

printf("\n\n\n = pointing %d, %d =\n",*ptr1,*ptr2);


show1(arr1,sizeof(arr1)/sizeof(int));
show2(arr2,sizeof(arr2)/sizeof(int));




return 0;
}

