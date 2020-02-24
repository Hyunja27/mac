#include <stdio.h>


int whowinsamevs(int num1, int num2,int (*fptr)(int p1,int p2))
{
return fptr(num1,num2);
}

int whowindifvs(int p1,int pp1,int pp2,int (*fptr)(int p1,int pp1,int pp2))
{
return fptr(p1,pp1,pp2);
}

int samevs(int p1,int p2)
{
 if(p1>p2)
  return p1;
 else if(p2>p1)
  return p2;
 else 
  return 0;
}


int difvs(int p1,int pp1, int pp2)
{
 if(p1>(pp1+pp2)/2)
  return p1;
 else if(p1<(pp1+pp2)/2)
  return pp1+pp2;
 else 
  return 0;
}



int main(void)
{
int arr1[4],arr2[4],arr3[4];
int i,j,res1;


printf("==================/n=input character status.===================\n\n + 1st: strenght / 2nd : intelligence / 3nd : dexterity / 4nd : Luck\n");

for(i=0; i<4; i++)
scanf("%d",&arr1[i]);

printf("ok! next character!/n + 1st: strenght / 2nd : intelligence / 3nd : dexterity / 4nd : Luck \n");




for(i=0; i<4; i++)
scanf("%d",&arr2[i]);

printf("ok! next character!/n + 1st: strenght / 2nd : intelligence / 3nd : dexterity / 4nd : Luck \n");




for(i=0; i<4; i++)
scanf("%d",&arr3[i]);


printf("ok here is the all characters status that you input \n");

printf("\n 1st: strenght /  2nd : intelligence / 3nd : dexterity / 4nd : Luck\n");
for(j=0; j<4; j++)
 {
  printf(" [ %5d ] ",arr1[j]);
 }

printf("\n 1st: strenght /  2nd : intelligence / 3nd : dexterity / 4nd : Luck\n");
for(j=0; j<4; j++)
 {
  printf(" [ %5d ] ",arr2[j]);
 }

printf("\n 1st: strenght /  2nd : intelligence / 3nd : dexterity / 4nd : Luck\n");
for(j=0; j<4; j++)
 {
  printf(" [ %5d ] ",arr3[j]);
 }


printf(" \n\n o0 allright, then lets fight! 0o \n\n");

printf("==>>char1 and char2 fight! board game fight.");
res1 = whowinsamevs(arr1[1],arr2[1],samevs);
printf("\n => 1 intel is %d, 2 intel is %d, so %d is higher!\n\n ",arr1[1],arr2[1],res1);

printf("==>>char2 and char3 fight! the arm wrestle fight!! wow! ");
res1 = whowinsamevs(arr2[0],arr3[0],samevs);
printf("\n => 2 str is %d, 3 intel str %d, so %d is higher!\n\n ",arr2[0],arr3[0],res1);

printf("==>>char1 and char3 fight! lucky dice Throw fight.");
res1 = whowinsamevs(arr1[3],arr3[3],samevs);
printf("\n => 1 luck is %d, 3 luck is %d, so %d is higher!\n\n ",arr1[3],arr3[3],res1);


printf("==>>char1 and char3 fight again! hmm? [luck vs str+dex]?? .");
res1 = whowindifvs(arr1[3],arr3[0],arr3[2],difvs);
printf("\n => 1 luck is %d, 3 str+dex is %d, so %d is higher!\n\n ",arr1[3],arr3[0]+arr3[2],res1);


return 0;
}
