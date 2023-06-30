#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct queue
{
    node *front;
    node *rear;
}queue;

queue *createQueue()
{
    queue *temp = malloc(sizeof(queue));
    temp->front = NULL;
    temp->rear = NULL;
}

void printQueue(queue *Q)
{
    node *ptr = Q->front;
    while(ptr != Q->rear)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;    
    }
    printf("%d ",ptr->data);
}

void enqueue(queue *Q)
{
    node *temp = malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d",&temp->data );

    if (Q->front == NULL)
    {
        Q->front = temp;
        Q->rear = temp;
        temp->next = temp;
    }

    node *ptr = Q->rear;
    temp->next = Q->front;
    ptr->next = temp;
    Q->rear = Q->rear->next;
}

void dequeue(queue *Q)
{
    if (Q->front == NULL && Q->rear == NULL)
    {
        printf("<---Queue is Empty--->");
        return;
    }

    node *ptr = Q->front;

    if(Q->front == Q->rear && Q->front != NULL)
    {
        Q->front == NULL;
        Q->rear == NULL;
        free(ptr);
        return;
    }

    Q->front = Q->front->next;
    Q->rear->next = Q->front;
    free(ptr);
}

int main()
{
    queue *Q = createQueue();
    while (1)
    {
        int choice;
        printf("\n-->queue operations\n\n1. traversal\n2. enqueue\n3. dequeue\n\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printQueue(Q);
            break;
        case 2:
            enqueue(Q);
            break;
        case 3:
            dequeue(Q);
            break;
        case 4:
            exit(0);
            break;
        }
    }
}