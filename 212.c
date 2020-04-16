#include <stdio.h>

typedef struct{
double score1,score2,score3;
double result;
}Student;

int main(void){

int i,j=0,len;

fscanf(stdin,"%d",&len);


Student arr[len];
double tmp;

for(i=0; i<len; i++){
 fscanf(stdin,"%lf%lf%lf",&arr[i].score1,&arr[i].score2,&arr[i].score3);
}

for(i=0; i<len; i++){
 arr[i].result=(arr[i].score1+arr[i].score2+arr[i].score3)/3;
}

while(j<len){
 for(i=0; i<len-1; i++){
  if(arr[i].result<arr[i+1].result){
   tmp=arr[i].result;
   arr[i].result=arr[i+1].result;
   arr[i+1].result=tmp;}
 }
j++;
}

for(i=0; i<len; i++){
 fprintf(stdout,"%.1f\n",arr[i].result);
}

return 0;
}
