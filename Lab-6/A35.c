//WAP to get and print the array elements using Pointer.

#include<stdio.h>
int main(){
    int n,i;

    printf("Enter n : ");
    scanf("%d",&n);

    int a[n];
    int *ptr = a;

    for(i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d", ptr + i);
    } 

    for(i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }

    return 0;
}