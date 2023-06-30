#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *createNode(int value)
{
    node *temp = malloc(sizeof(node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
}

void printTabs(int level)
{
    for (int i = 0; i < level; i++)
        printf("\t");
}

void printTree_rec(node *root, int level)
{
    if (root == NULL)
    {
        printTabs(level);
        printf("---<empty>---\n");
        return;
    }
    printTabs(level);
    printf("%d\n", root->data);
    printTabs(level);
    printf("left\n");
    printTree_rec(root->left, level + 1);
    printTabs(level);
    printf("right\n");
    printTree_rec(root->right, level + 1);
}

void printTree(node *root)
{
    int level = 0;
    printTree_rec(root, level);
}

node *addNode(node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    else if (data>root->data)
    {
        root->right = addNode(root->right,data);
    }
    else if (data<root->data)
    {
        root->left = addNode(root->left,data);
    }
    return root;
}

void createBST(node *root, int num)
{
    for (int i = 0; i < num; i++)
    {
        int n;
        scanf("%d", &n);
        root = addNode(root, n);
    }
}

void search(node *root, int val)
{
    if (root->data == val)
    {
        printf("'%d' is present in tree", val);
    }
    else if (root->data > val)
    {
        search(root->left, val);
    }
    else
    {
        search(root->right, val);
    }
}

node *getSuccessor(node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

node *delNode(node *root, int x)
{

    if (root == NULL)
        return root;

    if (root->data > x)
        root->left = delNode(root->left, x);

    else if (root->data < x)
        root->right = delNode(root->right, x);\

    else
    {
        if (root->left == NULL && root->right == NULL)
            return NULL;

        else if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            node *succ = getSuccessor(root);
            root->data = succ->data;
            root->right = delNode(root->right, succ->data);
        }
    }
    return root;
}

int main()
{
    int num, first;
    printf("enter no of elements\n");
    scanf("%d", &num);
    printf("enter elements\n");
    scanf("%d", &first);
    node *root = createNode(first);
    createBST(root, num - 1);

    while (1)
    {
        int choice, val;
        printf("\n\n-->list operations\n\n1. print tree\n2. insert\n3. delete\n4. search\n5. exit\n\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printTree(root);
            break;
        case 2:
            printf("\nenter a value to insert: \n");
            scanf("%d", &val);
            root = addNode(root, val);
            break;
        case 3:
            printf("\nenter a value to delete: \n");
            scanf("%d", &val);
            root = delNode(root, val);
            break;
        case 4:
            printf("\nenter a value to search: \n");
            scanf("%d", &val);
            search(root, val);
            break;
        case 5:
            exit(0);
            break;
        }
    }
    return 0;
}