#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
char indic1[50];
char indic2[50];

FILE*fp1=fopen("606_5A.txt","rt");
FILE*fp2=fopen("606_5b.txt","rt");

while(1){
fscanf(fp1,"%s",indic1);
fscanf(fp2,"%s",indic2);

if(strcmp(indic1,indic2)!=0)
{puts("Text file is different!");
 break;}

if(feof(fp1)!=0||feof(fp2)!=0){
puts("same text file!");
 break;}

}



return 0;
}




