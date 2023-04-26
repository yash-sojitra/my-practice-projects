#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node node;

void printList(node *head)
{
    node* start  = head->next;
    printf("%d ",head->data);
    while (start != head)
    {
        printf("%d ", start->data);
        start = start->next;
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
    ptr->next = head;
}

int main()
{
    
    int n;
    printf("enter length of circular linked list: \n");
    scanf("%d", &n);
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    printf("enter data of linked list: \n");
    scanf("%d", &head->data);
    head->next = NULL;

    createList(head,n);

    printList(head);

    return 0;
}