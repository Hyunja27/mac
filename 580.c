#include <stdio.h>

void scan(int a, int b)
{
 switch (a){
 case 1:
 if(b>0&&b<32)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 2:
 if(b>0&&b<30)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 3:
 if(b>0&&b<32)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 4:
 if(b>0&&b<31)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 5:
 if(b>0&&b<32)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 6:
 if(b>0&&b<31)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 7:
 if(b>0&&b<32)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 8:
 if(b>0&&b<32)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 9:
 if(b>0&&b<31)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
 case 10:
 if(b>0&&b<32)
  printf("OK!");
 else
  printf("BAD!");
 break; 
 
  case 11:
 if(b>0&&b<31)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
  case 12:
 if(b>0&&b<32)
  printf("OK!");
 else
  printf("BAD!");
 break;
 
  default :
  printf("BAD!");
 break;
 
 }
 
}




int main(void)
{
int mon,day;

scanf(" %d %d",&mon,&day);

scan(mon,day);

return 0;
}
