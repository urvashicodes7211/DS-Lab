//WAP to determine whether the entered character is vowel or not. 
#include<stdio.h>
int main(){
    char ch;
    printf("Enter char : ");
    scanf("%c",&ch);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch=='O' || ch == 'U' || ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("vowel");
    }
    else{
        printf("not vowel");
    }
    return 0;
}