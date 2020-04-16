#include <stdio.h>

int main(void)
{char count=0,i,j,k,str[5][21];
 char tmparr[21];
scanf(" %s %s %s %s %s",str[0],str[1],str[2],str[3],str[4]);

while(count<5){
for(i=1; i<5; i++){
if(str[i-1][0]<str[i][0]){
 for(k=0; k<21; k++)
  tmparr[k]=str[i-1][k];
 for(k=0; k<21; k++)
  str[i-1][k]=str[i][k];
 for(k=0; k<21; k++)
  str[i][k]=tmparr[k];}

if(str[i-1][0]==str[i][0]){
 for(j=1; j<21; j++){
  if(str[i-1][j]<str[i][j]){
   for(k=0; k<21; k++)
    tmparr[k]=str[i-1][k];
   for(k=0; k<21; k++)
    str[i-1][k]=str[i][k];
   for(k=0; k<21; k++)
    str[i][k]=tmparr[k];
   
   break;} 
}

}

}
count++;
}
for(i=0; i<5; i++)
printf("%s\n",str[i]);


return 0;
}
