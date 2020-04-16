#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{char resultarr[3][100],str[3][31];
 int i,len,adder=0;
 double fnum1;

 for(i=0; i<3; i++)
  scanf(" %s",str[i]);

 strcpy(resultarr[0],str[0]);
 strcat(resultarr[0],str[1]);
 strcat(resultarr[0],str[2]);

 len=strlen(resultarr[0]);

 if(len%2==1){
  len++;
  adder++;}

 strncpy(resultarr[1],resultarr[0],len/2);

 for(i=0; i<len; i++)
  resultarr[2][i]=resultarr[0][len/2+1+i];

 fnum1=atof(resultarr[1]);
 
 printf("%.2f\n",fnum1);

 if(adder==1)
  printf("%c",resultarr[0][len/2-1]);

 printf("%s",resultarr[2]);

 
return 0;
}
