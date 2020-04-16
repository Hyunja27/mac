#include <stdio.h>
#include <string.h>

typedef struct{
char name[20];
int lenth;
}Kee;

int main(void)
{Kee k1,k2,k3,k4,k5,max;
 int i;

scanf(" %s%d",k1.name,&k1.lenth);
scanf(" %s%d",k2.name,&k2.lenth);
scanf(" %s%d",k3.name,&k3.lenth);
scanf(" %s%d",k4.name,&k4.lenth);
scanf(" %s%d",k5.name,&k5.lenth);

if(k1.lenth<k2.lenth){
 max.lenth=k1.lenth;
 strcpy(max.name,k1.name);}
else{ 
 max.lenth=k2.lenth;
 strcpy(max.name,k2.name);}

if(max.lenth>k3.lenth){
 max.lenth=k3.lenth;
 strcpy(max.name,k3.name);}

if(max.lenth>k4.lenth){
 max.lenth=k4.lenth;
 strcpy(max.name,k4.name);}

if(max.lenth>k5.lenth){
 max.lenth=k5.lenth;
 strcpy(max.name,k5.name);}

printf("%s %d",max.name,max.lenth);

return 0;
}
