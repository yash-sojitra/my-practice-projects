#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};

void printlist(struct node * head)
{
    if(head == NULL)
    {
        printf("list is empty.");
    }
    else{
        struct node * ptr = head;
        while(ptr!=NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->link;
        }
    }
}
void append(struct node * head_ref,int ndata)
{
    struct node * c = (struct node *)malloc(sizeof(struct node));
    c->data=ndata;
    c->link=0;

    while((head_ref)->link != 0)
    {
        head_ref = (head_ref)->link;
    }
    (head_ref)->link = c;
    c->link = 0;
}

int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    append(head,25);
    append(head,2);
    append(head,5);
    printlist(head);
    printf("\n");

    struct node * p1 = head->link;
    struct node * p2 = head;
    int x;
    printf("Enter the position of the element you want to delete.\n");
    scanf("%d", &x);
    if(x==1)
    {
        free(p2);
        head = p1;
        p2 = NULL;
        p1 = NULL;
    }
    else{
        for(int i=1; i<x-1; i++)
        {
            p1 = p1->link;
            p2 = p2->link;
        }
        p2->link = p1->link;
        free(p1);
        p1=NULL;
    }
    printlist(head);
}