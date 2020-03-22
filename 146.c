#include <stdio.h>

int main(void)
{int num1,i,j,l,k=0,num=0,ch=65;

scanf("%d",&num1);

for(l=0; l<num1; l++){
for(i=0; i<num1-k; i++)
 printf("%c ",ch++); 

for(j=0; j<k; j++)
 printf("%d ",num++);
 
printf("\n");
k++;
}

return 0;
}
