#include <stdio.h>

int cha(int a, int b)
{int result;

 if(a>b)
 result=a*a-b*b;
 else if(b>a)
 result=b*b-a*a;
 else
 result=0;
 
 return result;
}

int main(void)
{int a,b;

scanf("%d %d",&a,&b);

printf("%d",cha(a,b));


return 0;
}
