#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    struct Node *previous;
    struct Node *next;
};
typedef struct Node node;
void printList(node *n)
{
    printf("\nthe linked list is:\n");
    int counter = 1;
    while (n != NULL)
    {
        printf("%d: %d\n", counter, n->data);
        counter++;
        n = n->next;
    }
}
void createList(node *head, int n)
{
    node *ptr;
    ptr = head;
    for (int i = 1; i < n; i++)
    {
        node *temp;
        temp = (node *)malloc(sizeof(node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        ptr->next = temp;
        temp->previous = ptr;
        ptr = temp;
    }
}

node *pushAtFirst(node *head)
{
    node *temp, *ptr;
    ptr = head;
    temp = (node *)malloc(sizeof(node));
    printf("\nenter the data of new node: \n");
    scanf("%d", &temp->data);
    temp->previous = NULL;
    temp->next = ptr;
    ptr->previous = temp;
    ptr = temp;
    head = ptr;
    return head;
}

void push(node *head)  
{
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
    temp->next->previous = temp;
    ptr->next = temp;
    temp->previous = ptr;
}

node *popFirst(node *head)
{
    head = head->next;
    head->previous = NULL;
    return head;
}

void pop(node *head)
{
    node *ptr1, *ptr2;
    int n;
    printf("\nenter the node number which you want to delete:\n");
    scanf("%d", &n);
    ptr1 = head;
    ptr2 = head->next;
    for (int i = 1; i < n - 1; i++)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    ptr1->next = ptr2->next;
    ptr1->next->previous = ptr1;
    ptr2->next = NULL;
    ptr2->previous = NULL;
    free(ptr2->next);
    free(ptr2);
}
int main()
{
    int n;
    printf("enter length of linked list: \n");
    scanf("%d", &n);
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    printf("enter data of linked list: \n");
    scanf("%d", &head->data);
    head->next = NULL;
    head->previous = NULL;
    createList(head, n);
    while (1)
    {
        int choice;
        printf("\n-->list operations\n\n1. traversal\n2. insertion\n3. insertion at first\n4. deletion\n5. deletion at First\n6. exit\n\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printList(head);
            break;
        case 2:
            push(head);
            break;
        case 3:
            head = pushAtFirst(head);
        case 4:
            pop(head);
            break;
        case 5:
            head = popFirst(head);
            break;
        }
        if (choice == 6)
            break;
    }
    printList(head);
    return 0;
}