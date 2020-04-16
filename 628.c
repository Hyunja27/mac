#include <stdio.h>
#include <stdlib.h>

typedef struct{
char name[20];
int score; 
int inputorder;
int order;
}Student;

int main(void)
{ Student tmp,arr[10];
 int i,count=0;

for(i=0; i<10; i++){
 fscanf(stdin," %s%d",arr[i].name,&arr[i].score);
 arr[i].inputorder=i;
}

while(count<10){
for(i=0; i<9-count; i++){
 if(arr[i].score>arr[i+1].score){
  tmp=arr[i]; 
  arr[i]=arr[i+1];
  arr[i+1]=tmp;
 }
}
count++;
}
for(i=9; i>=0; i--){
 arr[i].order=10-i;
}
for(i=9; i>=1; i--){
 if(arr[i].score==arr[i-1].score)
  arr[i-1].order=arr[i].order;
}


count=0;

while(count<10){
for(i=0; i<9-count; i++){
 if(arr[i].inputorder>arr[i+1].inputorder){
  tmp=arr[i];
  arr[i]=arr[i+1];
  arr[i+1]=tmp;
 }
}
count++;
}

fprintf(stdout,"Name Score Rank");
puts("");
for(i=0; i<10; i++)
fprintf(stdout,"%4s %5d %4d\n",arr[i].name,arr[i].score,arr[i].order);

return 0;
}
