/*Read  two  2x2  matrices  and  perform  addition  of  matrices  into  third  matrix  and 
print it */

#include<stdio.h>
int main(){
    int i,j;
    int a[2][2],b[2][2],c[2][2];
    printf("------first matrices-----\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter number : ");
            scanf("%d",&a[i][j]);
        }
    }

    printf("------second matrices-----\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter number : ");
            scanf("%d",&b[i][j]);
        }
    }

    printf("-----addition  of  two matrices------\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}