/*Read  two  matrices,  first  3x2  and  second  2x3,  perform  multiplication  operation 
and store result in third matrix and print it.*/

#include<stdio.h>
int main(){
    int i,j,k;
    int a[3][2],b[2][3],c[3][3];

    printf("------first matrices-----\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Enter number : ");
            scanf("%d",&a[i][j]);
        }
    }

    printf("------second matrices-----\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter number : ");
            scanf("%d",&b[i][j]);
        }
    }

    printf("-----multiplication  of  two matrices------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = 0;
            for(k=0;k<2;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}