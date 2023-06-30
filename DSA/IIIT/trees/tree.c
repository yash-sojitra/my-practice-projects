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

void printTree(node* root)
{
    int level = 0;
    printTree_rec(root,level);
}

void height_rec(node *root, int level, int *lvlptr)
{
    if (level > *(lvlptr))
        *(lvlptr) = level;

    if (root == NULL)
        return;

    height_rec(root->left, level + 1, lvlptr);
    height_rec(root->right, level + 1, lvlptr);
}

int height(node* root)
{
    int level = 0, *lvlptr = &level;
    height_rec(root,level,lvlptr);
    return level - 1;
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

void preOrder(node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

int maxPathLength(node *root)
{
    
    int leftLevel = height(root->left);
    int rightLevel = height(root->right);

    if (root->left != NULL)
        leftLevel++;
    if (root->right != NULL)
        rightLevel++;

    return leftLevel + rightLevel;
}

void leafValue(node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        printf("%d ", root->data);
    
    leafValue(root->left);
    leafValue(root->right);
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
        int choice;
        printf("\n\n-->list operations\n\n1. print tree\n2. pre-order\n3. in-order\n4. post-order\n5. height of tree\n6. maximun path length\n7. values of leaf nodes\n8. exit\n\nenter choice--> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printTree(root);
            break;
        case 2:
            printf("\npre-order traversal\n");
            preOrder(root);
            break;
        case 3:
            printf("\nin-order traversal\n");
            inOrder(root);
            break;
        case 4:
            printf("\npost-order traversal\n");
            postOrder(root);
            break;
        case 5:
            printf("\nheight of tree is:\n%d", height(root));
            break;
        case 6:
            printf("\nmax path length:\n%d", maxPathLength(root));
            break;
        case 7:
            printf("\nlist of all the leaf node values are:\n");
            leafValue(root);
            break;
        }
        if (choice == 8)
            break;
    }
    return 0;
}