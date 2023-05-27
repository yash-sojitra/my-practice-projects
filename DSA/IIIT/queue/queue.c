#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int front;
    int rear;
    int capacity;
    int *array;
} queue;

queue* createQueue()
{
    queue* Q = malloc(sizeof(queue));
    printf("enter length of queue");
    scanf("%d",&Q->capacity);
    Q->array = malloc(sizeof(int)*Q->capacity);
    Q->front = -1;
    Q->rear = -1;
    return Q;
}

void isEmpty(queue* Q)
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

void enQueue(queue* Q)
{
    if (isFull(Q)){
        printf("<-- Queue is full -->");
        return;
    }
    Q->rear++;
    printf("enter data:\n");
    scanf("%d",&Q );
    if (Q->front)
    {
        Q->front == Q->rear;
    }
    

}

int main()
{
    queue* numbers = createQueue();

    return 0;
}