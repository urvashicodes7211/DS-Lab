/*Write a program to implement a node structure for singly linked list. Read the 
data in a node, print the node.*/ 

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    printf("Data in the node: %d\n", newNode->data);

    free(newNode);

    return 0;
}