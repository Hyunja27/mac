#include <stdio.h>

void gugudan(int a, int b)
{int i,j;

 if(a>b){
  for(i=b; i<a+1; i++){
  printf("== %ddan @==\n",i);
   for(j=1; j<10; j++){
    printf("%d * %d = %d\n",j,i,j*i);}
printf("\n");
}
}
 else if(a<b){
  for(i=a; i<b+1; i++){
  printf("== %ddan @==\n",i);
   for(j=1; j<10; j++){
    printf("%d * %d = %d\n",j,i,j*i);}
printf("\n");
}
}

 else{
  for(i=a; i<a+1; i++){
  printf("== %ddan @==\n",i);
   for(j=1; j<10; j++)
    printf("%d * %d = %d\n",j,i,j*i);}
}
}

int main(void)
{
int num1,num2;

scanf("%d %d",&num1,&num2);

gugudan(num1,num2);

return 0;
}
