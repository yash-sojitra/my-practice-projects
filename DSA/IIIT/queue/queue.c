#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int front;
    int rear;
    int capacity;
    int *array;
} queue;

queue* createQueue(int n)
{
    queue* Q = malloc(sizeof(queue));
    Q->capacity = n;
    Q->array = malloc(sizeof(int)*n);
    Q->front = -1;
    Q->rear = -1;
    return Q;
}

int isEmpty(queue* Q)
{
    if (Q->front == -1 && Q->rear == -1)
        return 1;
    return 0;
}

int isFull(queue* Q)
{
    if (Q->front == 0 && Q->rear == Q->capacity - 1)
        return 1;
    return 0;
}

void enQueue(queue* Q, int data)
{
    if (isFull(Q)){
        printf("\n<-- Queue is full -->\n");
        return;
    }
    Q->rear++;
    if (Q->front == -1)
    {
        Q->front = Q->rear;
    }
    Q->array[Q->rear] = data;
}

int deQueue(queue* Q)
{
    int data;
    if (isEmpty(Q))
    {
        printf("\n<-- Queue is empty -->\n");
        return 0;
    }
    else{
        data = Q->array[Q->front];
        if(Q->front == 0 && Q->rear == 0)
        {
            Q->front = -1;
            Q->rear = -1;
        }
        else
        {
            Q->front++;
        }
    }
    return data;
}

int queueSize(queue* Q)
{
    return ((Q->capacity - Q->front + Q->rear + 1)% Q->capacity);
}


void printQueue(queue* Q)
{
    if(isEmpty(Q))
    {
        printf("\n<---Queue is Empty--->");
        return;
    }
    for (int i = Q->front; i <= Q->rear; i++)
    {
        printf("%d. %d\n",i,Q->array[i]);
    }  
}

int main()
{   
    int n;
    printf("enter length of queue:\n");
    scanf("%d",&n);
    queue* numbers = createQueue(n);

    while (1)
    {
        int data;
        int choice;
        printf("\n-->queue operations\n\n1. traversal\n2. enqueue\n3. dequeue\n\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printQueue(numbers);
            break;
        case 2:
            printf("enter data: \n");
            scanf("%d",&data);
            enQueue(numbers, data);
            break;
        case 3:
            printf("%d removed !",deQueue(numbers));
            break;
        if (choice == 4)
                break;
        }
    }
}