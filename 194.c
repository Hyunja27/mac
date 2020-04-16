#include <stdio.h>
#include <string.h>

int main(void)
{char str[2][101];
 int copynum,i;

 scanf(" %s %s %d",str[0],str[1],&copynum);

strcat(str[0],str[1]);

strncpy(str[1],str[0],copynum);

printf("%s\n%s",str[0],str[1]);

return 0;
}
