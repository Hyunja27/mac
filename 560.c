#include <stdio.h>

int main(void)
{
int num[10]={0,};
int min,i;


scanf("%d",&num[0]);
min=num[0];

for(i=1; i<10; i++)
{scanf("%d",&num[i]);
 
 if(i>=1){
  if(num[i]<min)
   min=num[i];
  else if(num[i]>min)
   min=min;
  else
   min=min;
 }

 
}

printf("%d",min);


return 0;
}
