#include <stdio.h>

int main(void)
{int i,num1,num[100]={0};
 
 for(i=0; i<100; i++){
  scanf("%d",&num1);
  if(num1==0)
   break;
  num[num1/10]++;
 }

 for(i=100; i>=0; i--){
  if(num[i]>0){
   printf("%d : %d person\n",i*10,num[i]);
   }
}


return 0;
}
