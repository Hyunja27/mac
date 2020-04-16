#include <stdio.h>
#include <string.h>

int main(void)
{char len,arr[3][20];

 fgets(arr[0],20,stdin);
 fgets(arr[1],20,stdin);
 
  strncpy(arr[2],arr[0],2);
 
 strcat(arr[2],arr[1]);
 
 strncat(arr[2],arr[0],2);

  printf("%s",arr[2]);
  
return 0;
}
