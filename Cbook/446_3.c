#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
char strfull1[40]={0,};
char strfull2[40]={0,};
char strname1[40]={0,};
char strname2[40]={0,};
char strage1[40]={0,};
char strage2[40]={0,};
int i,j=0,k=0;


fgets(strfull1,sizeof(strfull1),stdin);
for(i=0; i<strlen(strfull1); i++)
{
 strname1[j]=strfull1[i];
 if(strfull1[i]==' ')
 break;
 j++;
}
for(i=j; i<strlen(strfull1); i++)
{
 strage1[k]=strfull1[i];
 if(strfull1[i]=='\n')
 break;
 k++;
}
strage1[k]=0;
k=0;
j=0;

fgets(strfull2,sizeof(strfull2),stdin);
for(i=0; i<strlen(strfull2); i++)
{
 strname2[j]=strfull2[i];
 if(strfull2[i]==' ')
 break;
 j++;
}
for(i=j; i<strlen(strfull2); i++)
{
 strage2[k]=strfull2[i];
 if(strfull1[i]=='\n')
 break;
 k++;
}
strage2[k]=0;

puts("===================\n");
puts("strname1:");
puts(strname1);
puts("strname2:");
puts(strname2);
puts("strage1:");
puts(strage1);
puts("strage2:");
puts(strage2);
puts("===================\n");







if(!strcmp(strname1,strname2))
 printf("\nname is same!!\n");
else
 printf("\nname is different.");

if(!strcmp(strage1,strage2))
 printf("\nage is same!!\n");
else
 printf("\nage is different.");





return 0;
}
