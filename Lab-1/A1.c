//WAP to calculate area of a Circle (A = πr2).
#include<stdio.h>
int main(){
    float r;
    printf("Enter r: ");
    scanf("%f",&r);
    float area;
    area = 3.14 * r * r;
    printf("%f",area);
    return 0;
}