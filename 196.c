#include <stdio.h>
#include <string.h>

typedef struct{
char name[100];
char tel[100];
char addr[100];
}Status;

int main(void){
int i,count=0;
Status str[4];

for(i=0; i<3; i++)
 scanf(" %s %s %s",str[i].name,str[i].tel,str[i].addr);
 
while(count<3){
for(i=1; i<3; i++){ 
 if(strcmp(str[i-1].name,str[i].name)<0){
   str[3]=str[i-1];
  }
}
count++;
}

printf("name : %s\ntel : %s\naddr : %s",str[3].name,str[3].tel,str[3].addr);


return 0;
}
