#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* lChild;
    struct node* rChild;
};

int preOrder(struct node* root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->lChild);
        preOrder(root->rChild);
        return 0;
    }
}

int main()
{

    struct node* root = (struct node*)malloc(sizeof(struct node));
    struct node* l1 = (struct node*)malloc(sizeof(struct node));
    struct node* r1 = (struct node*)malloc(sizeof(struct node));

    root->data = 12;
    l1->data = 20;
    r1->data = 6;

    l1->lChild = NULL;
    l1->rChild = NULL;
    r1->lChild = NULL;
    r1->rChild = NULL;

    root->lChild = l1;
    root->rChild = r1;

preOrder(root);

    return 0;
}
//tree