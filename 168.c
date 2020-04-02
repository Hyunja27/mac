
#include <stdio.h>

int main()
{
    int a[11][11] = {{1}};
    int size;
    scanf("%d", &size);


    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
                printf("%d ", a[i][j]);
            }
        printf("\n");
 }   



    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }
    for(i=size;i>0;i--){
        for(j=size;j>0;j--){
            if(a[i][j] != 0){
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}
