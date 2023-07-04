#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
} node;

node *createNode(int data)
{
    node *tmp = malloc(sizeof(node));
    tmp->data = data;
    tmp->height = 1;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

int height(node *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}

int getBalance(node *root)
{
    if (root == NULL)
        return 0;
    return height(root->left) - height(root->right);
}

node *leftRotate(node *root)
{
    node *B = root->right;
    root->right = B->left;
    B->left = root;

    root->height = __max(height(root->left), height(root->right));
    B->height = __max(height(B->left), height(B->right));

    return B;
}

node *rightRotate(node *root)
{
    node *B = root->left;
    root->left = B->right;
    B->right = root;

    root->height = __max(height(root->left), height(root->right));
    B->height = __max(height(B->left), height(B->right));

    return B;
}

node *minValueNode(node *root)
{
    root = root->right;
    while (root != NULL && root->left != NULL)
        root == root->left;
    return root;
    
}

node *addNode(node *root, int data)
{
    if (root == NULL)
        return createNode(data);

    else if (data < root->data)
        root->left = addNode(root->left, data);

    else if (data > root->data)
        root->right = addNode(root->right, data);

    else
        return root;

    int balance = getBalance(root);

    //*LL
    if (balance > 1 && data < root->left->data)
        return rightRotate(root);

    //*RR
    if (balance < -1 && data > root->right->data)
        return leftRotate(root);

    //*LR
    if (balance > 1 && data > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    //*RL
    if (balance < -1 && data < root->right->data)
    {
        root->right = rightRotate(root->left);
        return leftRotate(root);
    }
    return root;
}

node *deleteNode(node *root, int data)
{
    if (root == NULL)
        return root;

    if (data < root->data)
        root->left = deleteNode(root->left, data);

    if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        //*node is found
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
            node *succ = minValueNode(root);
            root->data = succ->data;
            root->right = deleteNode(root->right, succ->data);
        }
    }

    int balance = getBalance(root);

    //*LL
    if (balance > 1 && getBalance(root->left) >= 0) 
        return rightRotate(root); 
 
    //*LR
    if (balance > 1 && getBalance(root->left) < 0) { 
        root->left = leftRotate(root->left); 
        return rightRotate(root); 
    } 
 
    //*RR
    if (balance < -1 && getBalance(root->right) <= 0) 
        return leftRotate(root); 
 
    //*RL
    if (balance < -1 && getBalance(root->right) > 0) { 
        root->right = rightRotate(root->right); 
        return leftRotate(root); 
    }
    return root;
}

void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

void search(node *root, int data)
{
    if (root == NULL)
        return;
    else if (root->data == data)
        printf("%d element is present in AVL tree", data);

    search(root->left, data);
    search(root->right, data);
}

int main()
{
    node *root = createNode(10);
    root = addNode(root, 13);
    root = addNode(root, 9);
    root = addNode(root, 4);
    root = addNode(root, 5);
    root = addNode(root, 1);
    root = addNode(root, 20);
    root = addNode(root, 17);

    inOrder(root);

    root = deleteNode(root, 17);
    printf("\n");
    inOrder(root);

    return 0;
}