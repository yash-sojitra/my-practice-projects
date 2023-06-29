#include <stdio.h>
#include <stdlib.h>

typedef struct circQueue
{
    int capacity;
    int front;
    int rear;
    int *array;
} cQueue;

cQueue *createQueue(int cap)
{
    cQueue *temp = malloc(sizeof(cQueue));
    temp->capacity = cap;
    temp->front = temp->rear = -1;
    temp->array = malloc(sizeof(int) * temp->capacity);
    return temp;
}

int isEmpty(cQueue *Q)
{
    if (Q->front == -1 || Q->rear == -1)
        return 1;
    return 0;
}

int size(cQueue *Q)
{
    return Q->front < Q->rear ? Q->rear - Q->front + 1 : Q->capacity - Q->front + Q->rear + 1;
}

int isFull(cQueue *Q)
{
    if (size(Q) == Q->capacity)
        return 1;
    return 0;
}

void enqueue(cQueue *Q)
{
    if (isFull(Q))
    {
        printf("!!! Queue is Full !!!");
        return;
    }
    int data;
    printf("enter data \n");
    scanf("%d", &data);
    Q->rear = (Q->rear + 1) % Q->capacity;
    if (Q->front == -1)
        Q->front++;
    Q->array[Q->rear] = data;
}

int dequeue(cQueue *Q)
{
    int data = -1;
    if (isEmpty(Q))
    {
        printf("!!! Queue is Empty !!!");
        return 0;
    }
    data = Q->array[Q->front];
    if (Q->front == 0 || Q->rear == 0)
    {
        Q->front--;
        Q->rear--;
    }
    else
    {
        Q->front = (Q->front + 1) % Q->capacity;
    }
    return data;
}

void traverse(cQueue *Q)
{
    if (isEmpty(Q))
    {
        printf("Circular queue is empty.\n");
        return;
    }
    int i = Q->front;
    printf("Elements in the circular queue: \n");
    while (i != Q->rear+1)
    {
        printf("%d ", Q->array[i]);
        i = (i + 1) % Q->capacity;
    }
}

int main()
{
    int n;
    printf("enter length of queue: \n");
    scanf("%d", &n);
    cQueue *Q = createQueue(n);
    printf("!!Queue Created!!");

    while (1)
    {
        int choice;
        printf("\n-->queue operations\n\n1. traversal\n2. enqueue\n3. dequeue\n\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            traverse(Q);
            break;
        case 2:
            enqueue(Q);
            break;
        case 3:
            dequeue(Q);
            break;

            if (choice == 4)
                break;
        }
    }
    return 0;
}