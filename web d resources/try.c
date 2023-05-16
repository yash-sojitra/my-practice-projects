#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
    struct node *lptr;
    int val;
    struct node *rptr;
    struct node *parent;
}*start;

void create(){
    int l,i,le,r;
    printf("Enter the number of elements in the binary tree- ");
    scanf("%d",&l);
    printf("Enter the value of the root of binary tree- ");
    scanf("%d",&r);

    start=malloc(sizeof(struct node));
    start->val=r;
    start->lptr=NULL;
    start->rptr=NULL;
    start->parent==NULL;
    int lis[l-1];
    printf("Enter the numbers to be stored in the initial tree (Press enter after each number)- \n");
    for (i=1;i<l;i++){
        scanf("%d",&le);
        insert(le);}
}
void insert(int n){
    struct node *temp,*now;
    int x=1;
    now=start;
    temp=malloc(sizeof(struct node));
    temp->val=n;
    temp->lptr=NULL;
    temp->rptr=NULL;
    while(x!=2){
        if (n<(now->val)){
            if(now->lptr==NULL){
                now->lptr=temp;
                temp->parent=now;
                x++;
            }
            else{
                now=now->lptr;
                temp->parent=now;}
        }
        else{

            if(now->rptr==NULL){
                now->rptr=temp;
                x++;
                  }
            else{
                now=now->rptr;}
        }
    }

}

void delet(struct node *parent,struct node *start,int n){
    struct node *temp,*mi,*loc;
    loc=search(start,n);
    if (loc->lptr==NULL && loc->rptr==NULL){
        free(loc);
    }
    if (loc->lptr==NULL || loc->rptr==NULL){
        if (loc->lptr==NULL){
            if (loc->parent->lptr==n){
                loc->parent->lptr=loc->rptr;
            }
            else{
                loc->parent->rptr=loc->rptr;
            }
        }
        else{
            if (loc->parent->lptr==n){
                loc->parent->lptr=loc->lptr;
            }
            else{
                loc->parent->rptr=loc->lptr;
            }
        }
    if (loc->lptr!=NULL && loc->rptr!=NULL){
            mi=minsearch(loc);
            loc->val=mi->val;
            free(mi);

    }
}}
struct node* search(struct node *start,int n){
    if (start->val==n){
        printf("%d exists in the binary search tree",n);
    }

    else{
        if (start->val<n){
            start=start->lptr;
            search(start,n);
        }
        else{
            start=start->rptr;
            search(start,n);
        }
    }
    return(&start);
}

struct node mi= start;

struct node minsearch(struct node *start){

    while(start!=NULL){
    if (start->val<mi){
        mi=start;
        start=start->lptr;
    }}

    return(start);
}
void main(){
    struct node *loc;
    int c,y=0;
    create();

    while(y==0){
    printf("Choose the operation that you wish to perform- 1)Insertion 2)Deletion 3)Search 4)End Process");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("Enter the element that is to be added- ");
            scanf("%d",&le);
            insert(le);
        case 2:
            printf("Enter the element that is to be deleted- ");
            scanf("%d",&le);
            delet(start,le);
        case 3:
            printf("Enter the element that is to be searched- ");
            scanf("%d",&le);
            loc=search(start,n);
        case 4:
            y=1;
       }}}