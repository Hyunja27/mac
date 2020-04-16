#include <stdio.h>
#include <string.h>

int main(void)
{char str[10][100]={0,},tmp[100]={0,},ch[5],result[10][100]={0,};

int l=0,k,i,j=0,count=0;

for(i=0; i<10; i++)
 fscanf(stdin," %s",str[i]);
 getchar();

fscanf(stdin,"%s",ch);

for(i=0; i<10; i++){
 if(strstr(str[i],ch)!=NULL){
  for(k=0; k<strlen(str[i]); k++){
  result[j][k]=str[i][k];}
  j++;
 }
}

for(i=0; i<j; i++)
 printf("===%s\n",result[i]); 


while(count<j){
for(i=0; i<j-1; i++){
 if(strcmp(result[i],result[i+1])>0){

  for(k=0; k<strlen(result[i]); k++){
   tmp[k]=result[i][k];
  for(l=k+1; l<100; l++)
   tmp[l]=0;}

  for(k=0; k<strlen(result[i+1]); k++){
    result[i][k]=result[i+1][k];

    for(l=k+1; l<100; l++)
     result[i][l]=0;}

  for(k=0; k<strlen(tmp); k++){
    result[i+1][k]=tmp[k];

    for(l=k+1; l<100; l++)
     result[i+1][l]=0;} 
 
  }  
 }
count++;
}

for(i=0; i<j; i++){
 printf("%s\n",result[i]); 
}


return 0;
}
