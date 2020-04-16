#include <stdio.h>
 
 
 
int main(void){
int i,j,k=0,len,max,halfmax;
 
fscanf(stdin,"%d",&len);
 
max=len+len-1;
halfmax=max/2;
 
 
for(j=max/2; j>-1; j--){
 
  for(i=0; i<halfmax; i++)
   fprintf(stdout,"  ");
 
 for(i=-1; i<k; i++){
  fprintf(stdout,"* ");
  }
 
  for(i=0; i<halfmax; i++)
   fprintf(stdout,"  ");
 
halfmax--;
k++;
k++;
puts("");
}
 
 
 
max=len+len-1;
k--;
k--;
halfmax=2;
 
for(j=max/2; j>0; j--){
 
  for(i=halfmax; i>1; i--)
   fprintf(stdout,"  ");
 
 for(i=1; i<k; i++){
  fprintf(stdout,"* ");
  }
 
  for(i=halfmax; i>1; i--)
   fprintf(stdout,"  ");
 
halfmax++;
k--;
k--;
puts("");
}
 
 
return 0;
}
