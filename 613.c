#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char name[21];
char school[21];
int grade;
}Student;
 
void input(Student * A){
scanf(" %s",A->name);
scanf(" %s",A->school);
scanf("%d",&A->grade);
}

void output(Student A){
printf("Name : %s",A.name);
printf("School : %s",A.school);
printf("Grade : %d",A.grade);
}


int main(void)
{ Student me;

input(&me);
output(me);

return 0;
}
