#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define NULL 0

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
    printf("\n");
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

void in_atbeg(struct node ** head_ref, int ndata)
{
    struct node * n_node = (struct node *)malloc(sizeof(struct node));
    n_node->data = ndata;
    n_node->link = (*head_ref);
    (*head_ref) = n_node;
}

struct node* del_atend(struct node * head)
{
    struct node * p1 = head->link;
    struct node * p2 = head;
    while(p1->link !=0)
    {
        p1 = p1->link;
        p2 = p2->link;
    }
    free(p1);
    p1 = NULL;
    p2->link = NULL;
    p2 = NULL;
    return head;
}

struct node* del_atbeg(struct node * head)
{
    struct node * p = head;
    head = head->link;
    free(p);
    p=NULL;
    return head;
}

int main()
{
    int l,o,a,b,d,e,f,g,h,y,x,count=1;
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * ptr = head;
    struct node * p1 = head->link;
    struct node * p2 = head;
    struct node * pt = head;

    printf("Enter the 1st element of the linked list.\n");
    scanf("%d",&l);
    head->data=l;
    head->link=0;
    printf("Linked List created!!!\n");

do{
 printf("\n1.add a node at beginning\n");
 printf("2.add a node at end\n");
 printf("3.add a node at a particular position\n");
 printf("4.delete a node at end\n");
 printf("5.delete a node at beginning\n");
 printf("6.delete a particular node\n");
 printf("7.print the linked list\n");
 printf("8,traverse the linked list\n");
 printf("9.EXIT\n");

 printf("your option:\n");
 scanf("%d", &o);

 switch(o)
 {
     case 1:

        printf("\nEnter the number of elements you want to enter at the begning.\n");
        scanf("%d",&a);
        for(int i=0; i<a; i++)
        {
            printf("\nEnter the element you want to enter at the begning.\n");
            scanf("%d",&b);
            in_atbeg(&head,b);
        }
        break;
     case 2:

        printf("\nEnter the number of data you want to append.\n ");
        scanf("%d", &e);
        for(int i=0; i<e; i++)
        {
            printf("\nEnter the data you want to append.\n");
            scanf("%d", &d);
            append(head,d);
        }
        break;
     case 3:
        printf("\nEnter the data you want to enter.\n");
        scanf("%d", &y);
        struct node * c = (struct node*)malloc(sizeof(struct node));
        c->data = y;
        c->link = NULL;
        printf("\nEnter the position at which you want to enter the data.\n");
        scanf("%d", &x);
        for(int i=2; i<x; i++)
        {
            ptr = ptr->link;
        }
        if(x>1)
        {
            c->link = ptr->link;
            ptr->link = c;
        }
        else{
            c->link = head;
            head = c;
        }
        break;
     case 4:
        printf("\nEnter the number of data you want to delete from the end.\n");
        scanf("%d", &f);
        for(int i=0; i<f; i++)
        {
            head = del_atend(head);
        }
        break;

     case 5:
        printf("\nEnter the number of data you want to delete from the beginning.\n");
        scanf("%d", &g);
        for(int i=0; i<g; i++)
        {
            head = del_atbeg(head);
        }
        break;
     case 6:
        printf("Enter the position of the element you want to delete.\n");
        scanf("%d", &h);
        if(h==1)
        {
            //free(p2);
            head = p1;
            p2 = NULL;
            p1 = NULL;
        }
        else{
            for(int i=1; i<h-1; i++)
            {
                p1 = p1->link;
                p2 = p2->link;
            }
            p2->link = p1->link;
            free(p2);
            free(p1);
            p1=NULL;
            p2=NULL;
        }
        break;
     case 7:
        printlist(head);
        break;
     case 8:
        while(pt != NULL)
        {
            printf("\n%d element of the linked list is %d.",count,pt->data);
            count++;
            pt = pt->link;
        }
        printf("\nsize of linked list is %d\n", count-1);
        break;
 }
}while(o!=9);
}