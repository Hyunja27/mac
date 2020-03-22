#include <stdio.h>

int main(void)
{int num1,i,j,g=0;

scanf("%d",&num1);

 for(i=num1*2-1; i>0; i--){
 
 j=0;
 if(g!=0){
  while(j<g){ 
  printf(" ");
  j++;}
 }
 
  for(j=0; j<i; j++){
   printf("*");
 }
 
  j=0;
 if(g!=0){
  while(j<g){ 
  printf(" ");
  j++;}
 }
 
 printf("\n");
 g++;
 i--;
}

g-=2;

for(i=3; i<num1*2; i++){
 
 j=0;
 if(g!=0){
  while(j<g){ 
  printf(" ");
  j++;}
 }
 
  for(j=0; j<i; j++){
   printf("*");
 }
 
  j=0;
 if(g!=0){
  while(j<g){ 
  printf(" ");
  j++;}
 }
 
 printf("\n");
 g--;
 i++;
}
return 0;
}
