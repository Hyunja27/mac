#include <stdio.h>

int main(void){
int i,year1,year2,len,count=0;

fscanf(stdin,"%d%d",&year1,&year2);
len=year2-year1+1;

int arr[len];

for(i=0; i<len; i++){
 arr[i]=year1;
 year1++;
}


for(i=0; i<=len; i++)
{
if(arr[i]%4==0&&arr[i]%100!=0)
 count++;
else if(arr[i]%4==0&&arr[i]%100==0&&arr[i]%400==0)
 count++;
}
fprintf(stdout,"%d",count);


return 0;
}
