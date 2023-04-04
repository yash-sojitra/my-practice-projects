#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

void printList(node *n)
{
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

void insertLast(node *head)
{
    node *temp, *ptr;

    ptr = head;
    temp = (node *)malloc(sizeof(node));

    printf("enter the data of new node: \n");
    scanf("%d", temp->data);
    temp->next = NULL;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
}

int main()
{
    int n;
    printf("enter length of linked list: \n");
    scanf("%d",&n);

    node *head = NULL;
    head = (node *)malloc(sizeof(node));

    printf("enter data of linked list: \n");

    scanf("%d", &head->data);
    head->next = NULL;

    createList(head, n);

    printf("\nthe linked list is:\n");
    printList(head);
    // insertLast(head);
    // printf("\n");
    // printList(head);

    return 0;
}