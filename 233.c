#include <stdio.h>
int arr[11],sum,result=0,max,p=1;

void dice(int level,int sum)
{int i;

 if(level>max-1){

 for(i=0; i<max; i++)
  result+=arr[i];
 
 if(result==sum){
  
  if(p>max){
  for(i=0; i<max; i++)
   printf("%d ",arr[i]);

   puts("");
   p=0;
   result=0;}

   return;}
 else{
   result=0;
   return ; }
   
 }

 for(i=1; i<=6; i++){
  arr[level]=i;
  p++;
  dice(level+1,sum);
  }

}




int main(void){
scanf("%d%d",&max,&sum);

arr[0]=1;

dice(0,sum);

return 0;
}
