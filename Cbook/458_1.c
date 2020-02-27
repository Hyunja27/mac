#include <stdio.h>

struct employee
{
 char name[20];
 char pnum[20];
 int salary;
};

int main(void)
{
struct employee hyun1,hyun2;


fputs("input name1:",stdout);scanf("%s",hyun1.name);
printf("input pnum1:");scanf("%s",hyun1.pnum);
printf("input salary1:");scanf("%d",&hyun1.salary);

fputs("input name2:",stdout);scanf("%s",hyun2.name);
printf("input pnum2:");scanf("%s",hyun2.pnum);
printf("input salary2:");scanf("%d",&hyun2.salary);


fputs("1\'s people name:",stdout);puts(hyun1.name);
fputs("1\'s people pnum:",stdout);puts(hyun1.pnum);
fputs("1\'s people salary:",stdout);printf("%d",hyun1.salary);

fputs("2\'s people name:",stdout);puts(hyun2.name);
fputs("2\'s people pnum:",stdout);puts(hyun2.pnum);
fputs("2\'s people salary:",stdout);printf("%d",hyun2.salary);


return 0;
}
