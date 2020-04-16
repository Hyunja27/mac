#include <stdio.h>
#include <stdlib.h>

int main(void)
{char str[2][100];
 int strnum1,strnum2;

scanf(" %s %s",str[0],str[1]);

strnum1=atoi(str[0]);
strnum2=atoi(str[1]);

printf("%d",strnum1*strnum2);

return 0;
}
