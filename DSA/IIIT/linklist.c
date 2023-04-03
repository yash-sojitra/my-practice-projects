#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

typedef struct Node node;

void printList(node* n){

    while (n != NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
}

void insertFirst(node* head, node* n){
    node* t1 = n->next;
    head->next = n;
    
}


int main()
{  

    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    node* new = NULL;
    //node example;

    // example.data = 6;
    // example.next = head;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    printf("enter data for 3 nodes: \n");
    scanf("%d", &head->data);
    scanf("%d", &second->data);
    scanf("%d", &third->data);

    head->next = second;
    second->next = third;
    third->next = NULL;
    
    printList(head);

    return 0;
}