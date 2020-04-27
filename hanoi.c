#include <stdio.h>
#include <stdlib.h>
void hanoi(int a,char from, char by, char to)
{   int i;
    if (a == 1)
	printf("원반 1을 %c에서 %c로 이동\n",from,to);
    else 
    {
	hanoi(a-1,from,to,by);
	printf("원반 %d를 %c에서 %c로 이동\n",a,from,to);
	hanoi(a-1,by,from,to);
    }
}
int main(void)
{
    int many;
    scanf("%d",&many);
    hanoi(many,'A','B','C');
    return 0;
}
