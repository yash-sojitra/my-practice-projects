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

void enQueue(queue* Q, int n)
{
    if (isFull(Q)){
        printf("\n<-- Queue is full -->\n");
        return;
    }
    Q->rear++;
    if (Q->rear == Q->capacity -1)
    {
        Q->rear = 0;
    }
    else if (Q->front == -1)
    {
        Q->front = Q->rear;
    }
    Q->array[Q->rear] = n;
}

int deQueue(queue* Q)
{
    int data = -1;
    if (isEmpty(Q))
    {
        printf("\n<-- Queue is empty -->\n");
    }
    else{
        data = Q->array[Q->front];
        if (Q->front = Q->capacity -1)
        {
            Q->front = 0;
        }
        else if(Q->front == 0 || Q->rear == 0)
        {
            Q->front = Q->rear = -1;
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

    enQueue(numbers,5);
    enQueue(numbers,7);
    enQueue(numbers,9);
    enQueue(numbers,7);
    enQueue(numbers,9);
    enQueue(numbers,7);
    enQueue(numbers,5);

    printQueue(numbers);

    deQueue(numbers);
    deQueue(numbers);
    deQueue(numbers);

    printQueue(numbers);
    return 0;
}