#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
  
node *createQueue(int data)
{
    node *temp = malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
}

node *dequeue(node *head)
{   
    node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

void enqueue(node *head)
{
    node *ptr = head;
    while (ptr->next != NULL)
        ptr = ptr->next;
    node *temp = (node *)malloc(sizeof(node));
    printf("\nenter the data of new node: \n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    ptr->next = temp;
}

void printQueue(node *n)
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

int main()
{

    int data;
    printf("enter first element of queue");
    scanf("%d",&data);
    node *queue = createQueue(data);
    while (1)
    {
        int choice;
        printf("\n-->list operations\n\n1. traversal\n2. enqueue\n3. dequeue\n\nenter choice-->");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printQueue(queue);
            break;
        case 2:
            enqueue(queue);
            break;
        case 3:
            queue = dequeue(queue);
            break;
        }
        if (choice == 4)
            break;
    }
    return 0;
}