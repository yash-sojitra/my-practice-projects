#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct stack{
    int top;
    int capacity;
    struct node*head;
};
struct stack* creatstack(int cap){
    struct stack* stack;
    stack=malloc(sizeof(struct stack));
    stack->capacity=cap;
    stack->top=-1;
    stack->head->data=0;
    stack->head->next=NULL;
    struct node*ptr;
    ptr=stack->head;
    for(int i=1;i<cap;i++){
        struct node*temp;
        temp=malloc(sizeof(struct node*));
        temp->data=0;
        temp->next=NULL;
        ptr->next=temp;
        ptr=ptr->next;
    }
    return stack;
}
int isFull(struct stack*s){
    if(s->top==s->capacity-1)
        return 1;
    else    
        return 0;
}
int isEmpty(struct stack*s){
    if(s->top==-1)
        return 1;
    else    
        return 0;
}
int pushin(struct stack*s,int value){
    if(isFull(s))
        printf("stack is already full.");
    else{
        struct node*ptr;
        ptr=s->head;
        for(int i=1;i<=s->top;i++)
            ptr=ptr->next;
        ptr->next->data=value;
        s->top++;

    }
}
int popout(struct stack*s){
    if(isEmpty(s))
        printf("stack is alredy empty.");
    else{
        struct node*ptr;
        ptr=s->head;
        for(int i=1;i<s->top;i++)
            ptr=ptr->next;
        int c=ptr->next->data;
        printf("\n%d is pop out.\n",c);
        ptr->next->data=0;
        s->top--;
    }
}
int display(struct stack*s){
    struct node*ptr=s->head;
    int a=s->top;
    printf("\nstack is:-");
    for(int i=s->top;i>=0;i--){
        struct node*ptr1=ptr;
        for(int j=0;j<=a;j++)
            ptr1=ptr1->next;
        printf("\n%d->%d",i,ptr1->data);
    }
}
int main(){
    int cap;
    printf("enter value of capacity of stack:");
    scanf("%d",&cap);
    struct stack* stack;
    stack=creatstack(cap);
    int item;
    while(1){
        int choice;
        display(stack);
        printf("\nlist of operations:\n1.isFull\n2.isEmpty\n3.pop out\n4.push in\n5.exit\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                if(isFull(stack))
                    printf("stack is full.");
                else if(!isFull(stack))   
                    printf("stack isn't full.");
                break;
            case 2:
                if(isEmpty(stack))
                    printf("stack is empty.");
                else if(!isEmpty(stack))  
                    printf("stack is not empty.");
                break;
            case 3:
                popout(stack);
                break;
            case 4:
                printf("enter value:");
                scanf("%d",&item);
                pushin(stack,item);
                break;
        }
        if(choice == 5)
            break;
    }
}