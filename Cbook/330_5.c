#include <stdio.h>

void dessort(int arr[])
{
int i,i2,temp;

for(i2=6; i2>0; i2--)
{ 
for(i=0; i<6; i++)
{
	if(*(arr+i)>*(arr+i+1))
	{temp=*(arr+i+1);
 	 *(arr+i+1)=*(arr+i);
	 *(arr+i)=temp;
	}
}

printf("\n array[6] number is %d",arr[6]);
}
}




int main(void)
{
int arr[7];
int i,num1;

for(i=0; i<7; i++)
{
scanf("%d",&arr[i]);
}

printf("input number is ");
for(i=0; i<7; i++)
{
printf(" %d",arr[i]);
}

printf("\n\n");

dessort(arr);


printf("reordered number is ");
for(i=0; i<7; i++)
{
printf(" %d",arr[i]);
}

return 0;
}
