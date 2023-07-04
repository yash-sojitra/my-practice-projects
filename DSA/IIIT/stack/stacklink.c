#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
struct Stack{
    node* top;
};
typedef struct Stack stack;
int isEmpty(stack *stack){
    if (stack->top == NULL)
        return 1;
    return 0;
}
void pop(stack* stack){ 
    if (isEmpty(stack)){
        printf("\nStack is empty\n");
        return;
    }else{
    node* ptr = stack->top;
    stack->top = stack->top->next;
    free(ptr);
    }
}
void push(stack* stack){
    node *temp, *ptr;
    ptr = stack->top;
    temp = (node *)malloc(sizeof(node));
    printf("\nenter the data: \n");
    scanf("%d", &temp->data);
    temp->next = ptr;
    ptr = temp;
    stack->top = ptr;
}
stack* createStack(){
    stack* temp = malloc(sizeof(stack));
    temp->top = NULL;
    return temp;
}
void traverse(stack* stack){
    node* ptr = stack->top;
        if (ptr == NULL){
            printf("!!empty!!");
            return;
        }    
    while (ptr){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    stack* numbers = createStack();
    printf("\n-->stack operations\n\n1. traversal\n2. push\n3. pop\n4. exit\n");
    while (1){
        int choice, data;printf("\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            traverse(numbers);
            break;
        case 2:
            push(numbers);
            break;
        case 3:
            pop(numbers);
            break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}