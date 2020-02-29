#include <stdio.h>

struct employee
{
 char name[20];
 char pnum[20];
 int salary;
};

int main(void)
{
int i;
struct employee arr[3];



for(i=0; i<4; i++)
{
printf("input name%d:",i);scanf("%s",arr[i].name);
printf("input pnum%d:",i);scanf("%s",arr[i].pnum);
printf("input salary%d:",i);scanf("%d",&arr[i].salary);
}

for(i=0; i<4; i++)
{
printf("%d\'s people name:",i);puts(arr[i].name);
printf("%d\'s people pnum:",i);puts(arr[i].pnum);
printf("%d\'s people salary:",i);printf("%d",arr[i].salary);
}

return 0;
}
