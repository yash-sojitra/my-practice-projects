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

int isFull(cQueue *Q)
{
    if (size(Q) == Q->capacity)
        return 1;
    return 0;
}

int size(cQueue *Q)
{
    return Q->front < Q->rear ? Q->rear - Q->front + 1 : Q->capacity - Q->front + Q->rear + 1;
}

int enqueue(cQueue *Q, int n)
{
    if (isFull(Q))
    {
        printf("!!! Queue is Full !!!");
    }
    if (Q->rear == Q->capacity -1)
    {
        Q->rear = 0;
    }
    else if (Q->front == -1)
    {
        Q->front = Q->rear;
    }
    Q->rear = 0;
    Q->array[Q->rear] = n;
}

int dequeue(cQueue *Q)
{
    int data = -1;
    if (isEmpty(Q))
    {
        printf("!!! Queue is Empty !!!");
    }
    else
    {
        data = Q->array[Q->front];
        if (Q->front == Q->capacity-1)
        {
            Q->front = 0;
        }
        else if (Q->front == Q->rear == 0)
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

int main()
{
    
    return 0;
}