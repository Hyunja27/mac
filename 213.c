#include <stdio.h>
#include <string.h>

int main(void){
char str[20][101]={ 0, };
char tmp[20][101]={ 0, };
int i,j=1,l=0,mark=0,k=0,count=0;

fgets(str[0],100,stdin);
 
for(i=0; i<strlen(str[0]); i++){

 if(str[0][i]==32||str[0][i]==10){
  for(k=mark; k<i; k++){
   str[j][0+l]=str[0][k];
   l++;}
   
   l=0;
   mark=i+1;
   j++;
   count++;
 }
}

for(i=1; i<=count; i++){
printf("==%s==\n",str[i]);
} 

i=1;
l=1;

for(j=0; j<strlen(str[1]); j++)
   tmp[0][j]=str[1][j];

 

for(i=2; i<=count; i++){
 if(strlen(tmp[0])<strlen(str[i])){
  for(j=0; j<strlen(str[i]); j++)
    tmp[0][j]=str[i][j];
}

 else if(strlen(tmp[0])==strlen(str[i])){
  for(j=0; j<strlen(str[i]); j++){
    tmp[l][j]=str[i][j];
    }
 l++;
 } 
}

for(i=1; i<l; i++){
 if(strlen(tmp[0])>strlen(tmp[i])+1){
    tmp[i][0]=0;
}
}

for(i=0; i<l; i++){
printf("++=%s=++\n",tmp[i]);
} 





if(tmp[1]==0)
 fprintf(stdout,"%lu\n%s",strlen(str[0]),tmp[0]);

else if(tmp[1]!=0){
 fprintf(stdout,"%lu\n",strlen(str[0]));

 for(i=0; i<l; i++)  
  fprintf(stdout,"%s ",tmp[i]);
}

return 0;
}
