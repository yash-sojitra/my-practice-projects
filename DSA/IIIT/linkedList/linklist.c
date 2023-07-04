#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void printList(node *n){
    printf("\nthe linked list is:\n");
    int counter = 1;
    while (n != NULL){
        printf("%d: %d  ", counter, n->data);
        counter++;
        n = n->next;
    }
}
void createList(node *head, int n){
    node *ptr;
    ptr = head;
    for (int i = 1; i < n; i++){
        node *temp;
        temp = (node *)malloc(sizeof(node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        ptr->next = temp;
        ptr = temp;
    }
}
node *pushAtFirst(node *head){
    node *temp, *ptr;
    ptr = head;
    temp = (node *)malloc(sizeof(node));
    printf("\nenter the data of new node: \n");
    scanf("%d", &temp->data);
    printf("hi1");
    temp->next = ptr;
    printf("hi2");
    ptr = temp;
    printf("hi3");
    head = ptr;
    return head;
}
void push(node *head){
    node *temp, *ptr;
    int n;
    printf("\nenter the node number after which you want to insert:\n");
    scanf("%d", &n);
    ptr = head;
    temp = (node *)malloc(sizeof(node));
    printf("\nenter the data of new node: \n");
    scanf("%d", &temp->data);
    for (int i = 0; i < n - 1; i++)
        ptr = ptr->next;
    temp->next = ptr->next;
    ptr->next = temp;
}
void pushAtLast(node *head){
    node *ptr = head;
    while (ptr->next != NULL)
        ptr = ptr->next;
    node *temp = (node *)malloc(sizeof(node));
    printf("\nenter the data of new node: \n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    ptr->next = temp;
}
node *popFirst(node *head){   
    node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
void pop(node *head){
    node *ptr1, *ptr2;
    int n;
    printf("\nenter the node number which you want to delete:\n");
    scanf("%d", &n);
    ptr1 = head;
    ptr2 = head->next;
    for (int i = 1; i < n - 1; i++){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    ptr1->next = ptr2->next;
    ptr2->next = NULL;
    free(ptr2->next);
    free(ptr2);
}
void popLast(node* head){
    node *ptr = head;
    while (ptr->next->next != NULL)
        ptr = ptr->next;
    free(ptr->next);
    ptr->next = NULL;
}
int main(){
    int n;
    printf("enter length of linked list: \n");
    scanf("%d", &n);
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    printf("enter data of linked list: \n");
    scanf("%d", &head->data);
    head->next = NULL;
    createList(head, n);
    printf("\n-->list operations\n\n1. traversal\n2. insertion\n3. insertion at first\n4. insertion at last\n5. deletion\n6. deletion at First\n7. deletion at last\n8. exit\n");
    while (1){
        int choice;
        printf("\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printList(head);
            break;
        case 2:
            push(head);
            break;
        case 3:
            head = pushAtFirst(head);
            break;
        case 4:
            pushAtLast(head);
            break;
        case 5:
            pop(head);
            break;
        case 6:
            head = popFirst(head);
            break;
        case 7:
            popLast(head);
            break;
        }
        if (choice == 8)
            break;
    }
    printList(head);
    return 0;
}