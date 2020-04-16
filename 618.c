#include <stdio.h>
#include <string.h>

typedef struct{
char name[20];
int lenth;
double weight;
}Status;

void name(Status str[])
{ int i,count=0;
  Status tmp;

while(count<5){
for(i=1; i<5; i++){
 if(strcmp(str[i-1].name,str[i].name)>0){
  tmp=str[i-1];
  str[i-1]=str[i];
  str[i]=tmp;
 }
}
count++;
}
printf("name\n");

for(i=0; i<5; i++)
printf("%s %d %.1f\n",str[i].name,str[i].lenth,str[i].weight);  

}

void weight(Status str[])
{ int i,count=0;
  Status tmp;

while(count<5){
for(i=1; i<5; i++){
 if(str[i-1].weight<str[i].weight){
  tmp=str[i-1];
  str[i-1]=str[i];
  str[i]=tmp;
 }
}
count++;
}
printf("weight\n");

for(i=0; i<5; i++)
printf("%s %d %.1f\n",str[i].name,str[i].lenth,str[i].weight);  

}


int main(void)
{ Status str[6];
  int i;

for(i=0; i<5; i++)
 scanf(" %s%d%lf",str[i].name,&str[i].lenth,&str[i].weight);


name(str);
puts("");
weight(str);

return 0;
}
