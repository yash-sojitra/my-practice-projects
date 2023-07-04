#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next;
} node;
void printList(node *head){
    node* start  = head->next;
    printf("\n1. %d\n",head->data);
    int i = 2;
    while (start != head){
        printf("%d. %d\n",i, start->data);
        start = start->next;
        i++;
    }
}
node *pushAtFirst(node *head){
    node* prev  = head->next;
    while (prev->next != head)
        prev = prev->next;
    node *temp, *ptr;
    ptr = head;
    temp = (node *)malloc(sizeof(node));
    printf("\nenter the data of new node: \n");
    scanf("%d", &temp->data);
    prev->next = temp;
    temp->next = ptr;
    ptr = temp;
    head = ptr;
    return head;
}
void push(node *head){
    node *temp, *ptr1, *ptr2;
    int n;
    printf("\nenter the node number after which you want to insert:\n");
    scanf("%d", &n);
    ptr1 = head;
    ptr2 = head->next;
    temp = (node *)malloc(sizeof(node));
    printf("\nenter the data of new node: \n");
    scanf("%d", &temp->data);
    for (int i = 0; i < n - 1; i++){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    temp->next = ptr2;
    ptr1->next = temp;
}
node *popFirst(node *head){
    node* prev  = head->next;
    while (prev->next != head)
        prev = prev->next;
    node *ptr = head;
    head = head->next;
    prev->next = ptr->next;
    ptr->next = NULL;
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
    ptr->next = head;
}
int main(){
    int n;
    printf("enter length of circular linked list: \n");
    scanf("%d", &n);
    node *head = (node *)malloc(sizeof(node));
    printf("enter data of linked list: \n");
    scanf("%d", &head->data);
    head->next = NULL;
    createList(head,n);
    while (1){
        int choice;
        printf("\n-->list operations\n\n1. traversal\n2. insertion\n3. insertion at first\n4. insertion at last\n5. deletion\n6. deletion at First\n7. deletion at last\n8. exit\n\nenter choice--> ");
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
            //pushAtLast(head);
            break;
        case 5:
            pop(head);
            break;
        case 6:
            head = popFirst(head);
            break;
        case 7:
            //popLast(head);
            break;
        }
        if (choice == 8)
            break;
    }
    return 0;
}