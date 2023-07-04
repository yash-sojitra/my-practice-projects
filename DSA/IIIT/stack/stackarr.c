#include <stdio.h>
#include <stdlib.h>
typedef struct Stack{
    int top;
    int capacity;
    int *array;
} stack;
int isFull(stack *stack){
    if (stack->top == stack->capacity - 1)
        return 1;
    return 0;
}
int isEmpty(stack *stack){
    if (stack->top == -1)
        return 1;
    return 0;
}
void push(stack *stack, int data){
    if (isFull(stack)){
        printf("\n!!! overflow !!!\n");
        return;
    }
    else{
        stack->top++;
        stack->array[stack->top] = data;
    }
}
void pop(stack *stack){
    if (isEmpty(stack))
        printf("\n!!! empty !!!\n");
    else{
        stack->array[stack->top] = 0;
        stack->top--;
    }
}
void traverse(stack *stack){
    if (isEmpty(stack)){
        printf("\n!!! empty !!!\n");
        return;
    }
    for (int i = stack->top; i >= 0; i--)
        printf("%d\n", stack->array[i]);
}
int main(){
    stack *numbers;
    numbers = malloc(sizeof(stack));
    printf("enter size of stack: \n");
    scanf("%d",&numbers->capacity);
    numbers->top = -1;
    numbers->array = (int *)malloc(sizeof(int) * numbers->capacity);
    printf("\n-->stack operations\n\n1. traversal\n2. push\n3. pop\n4. exit\n");
    while (1){
        int choice, data;
        printf("\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            traverse(numbers);
            break;
        case 2:
            printf("enter the data you want to push: \n");
            scanf("%d", &data);
            push(numbers, data);
            break;
        case 3:
            pop(numbers);
            break;
        }
        if (choice == 4)
            break;
    }
    return 0;
}