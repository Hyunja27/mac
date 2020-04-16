#include <stdio.h>

int arr[11],num1;

void dice(int arr[],int level)
{int i;
 
 if(level>num1){
  for(i=1; i<num1+1; i++)
   printf("%d ",arr[i]);

   puts("");
   return ;
   }

 for(i=arr[level-1]; i<7; i++){
  arr[level]=i;
  dice(arr,level+1);
  }
 
}

int main(void)
{
 scanf("%d",&num1);

 arr[0]=1;
 dice(arr,1);

 return 0;  
}
