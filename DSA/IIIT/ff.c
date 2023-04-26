#include <stdio.>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

void printList(node *n)
{
    printf("\nthe linked list is:\n");
    while (n != NULL)
    {
        printf("%d ", n->data);
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
        ptr = temp;
    }
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
    for (int i = 1; i < n; i++)
        ptr = ptr->next;
    temp->next = ptr->next;
    ptr->next = temp;
}

void pop(node *head)
{
    node *ptr1, *ptr2;
    int n;
    printf("\nenter the node number to delete:\n");
    scanf("%d", &n);
    ptr1 = head;
    ptr2 = head->next;
    for (int i = 1; i < n - 1; i++)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    ptr1->next = ptr2->next;
    ptr2->next = NULL;
    free(ptr2->next);
    free(ptr2);
}

void main()
{
    int n;
    printf("enter length of linked list: \n");
    scanf("%d", &n);
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    printf("enter data of linked list: \n");
    scanf("%d", &head->data);
    head->next = NULL;
    createList(head, n);
    while (1)
    {
        int choice;
        printf("\n-->list operations\n\n1. traversal\n2. insertion\n3. deletion\n4.exit\n\nenter choice--> ");
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
            pop(head);
            break;
        }

        if (choice == 4)
            break;
    }

    printList(head);
}
