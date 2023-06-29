#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    int height;
    node *left;
    node *right;
}
node;

node *createNode(int data)
{
    node * temp = malloc(sizeof(node));
    temp->val = data;
    temp->left = NULL;
    temp->right = NULL;
    temp->height = 1;
    return temp;
}

node *insertNode(node *root,int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    
}

int main()
{
    
    return 0;
}