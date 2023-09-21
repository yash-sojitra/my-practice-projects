#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
    int data; 
    struct Node *left; 
    struct Node *right; 
    int height; 
};  
int height(struct Node *node) { 
    if (node == NULL) 
        return 0; 
    return node->height; 
}
int max(int a, int b) { 
    return (a > b) ? a : b; 
}
struct Node *createNode(int data) { 
    struct Node *node = (struct Node *)malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    node->height = 1; 
    return node; 
}
struct Node *rightRotate(struct Node *y) { 
    struct Node *x = y->left; 
    struct Node *T2 = x->right; 
    x->right = y; 
    y->left = T2; 
    y->height = max(height(y->left), height(y->right)) + 1; 
    x->height = max(height(x->left), height(x->right)) + 1; 
    return x; 
}
struct Node *leftRotate(struct Node *x) { 
    struct Node *y = x->right; 
    struct Node *T2 = y->left; 
    y->left = x; 
    x->right = T2; 
    x->height = max(height(x->left), height(x->right)) + 1; 
    y->height = max(height(y->left), height(y->right)) + 1; 
    return y; 
}
int getBalance(struct Node *node) { 
    if (node == NULL) 
        return 0; 
    return height(node->left) - height(node->right); 
}
struct Node *insert(struct Node *node, int data) { 
    if (node == NULL) 
        return createNode(data); 
    if (data < node->data) 
        node->left = insert(node->left, data); 
    else if (data > node->data) 
        node->right = insert(node->right, data);
        return node;
    node->height = 1 + max(height(node->left), height(node->right)); 
    int balance = getBalance(node);
    if (balance > 1 && data < node->left->data) 
        return rightRotate(node);
    // Right Right Case 
    if (balance < -1 && data > node->right->data) 
        return leftRotate(node); 
    if (balance > 1 && data > node->left->data) { 
        node->left = leftRotate(node->left); 
        return rightRotate(node); 
    }
    if (balance < -1 && data < node->right->data) { 
        node->right = rightRotate(node->right); 
        return leftRotate(node); 
    }
    return node; 
}
struct Node *search(struct Node *node, int data) { 
    if (node == NULL || node->data == data) 
        return node; 
    if (data < node->data) 
        return search(node->left, data); 
    else 
        return search(node->right, data); 
}
struct Node *minValueNode(struct Node *node) { 
    struct Node *current = node; 
    while (current->left != NULL) 
        current = current->left; 
    return current; 
}
struct Node *deleteNode(struct Node *root, int data) { 
    if (root == NULL) 
        return root; 
    if (data < root->data) 
        root->left = deleteNode(root->left, data); 
    else if (data > root->data) 
        root->right = deleteNode(root->right, data); 
    else { 
        if (root->left == NULL || root->right == NULL) { 
            struct Node *temp = root->left ? root->left : root->right; 
            if (temp == NULL) { 
                temp = root; 
                root = NULL; 
            } else 
                *root = *temp; 
            free(temp); 
        } else { 
            struct Node *temp = minValueNode(root->right); 
            root->data = temp->data; 
            root->right = deleteNode(root->right, temp->data); 
        } 
    } 
    if (root == NULL)
    return root; 
    root->height = 1 + max(height(root->left), height(root->right)); 
    int balance = getBalance(root); 
    if (balance > 1 && getBalance(root->left) >= 0) 
        return rightRotate(root);
    if (balance > 1 && getBalance(root->left) < 0) { 
        root->left = leftRotate(root->left); 
        return rightRotate(root); 
    }
    if (balance < -1 && getBalance(root->right) <= 0) 
        return leftRotate(root); 
    if (balance < -1 && getBalance(root->right) > 0) { 
        root->right = rightRotate(root->right); 
        return leftRotate(root); 
    } 
    return root; 
}
void preOrder(struct Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct Node *root){
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}
void postOrder(struct Node *root){
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}
void height_rec(struct Node *root, int level, int *lvlptr){
    if (level > *(lvlptr))
        *(lvlptr) = level;

    if (root == NULL)
        return;

    height_rec(root->left, level + 1, lvlptr);
    height_rec(root->right, level + 1, lvlptr);
}
int maxheight(struct Node* root){
    int level = 0, *lvlptr = &level;
    height_rec(root,level,lvlptr);
    return level - 1;
}
int main() {
    struct Node *root = NULL; 
    int choice, value; 
        printf("\nAVL Tree Operations:\n"); 
        printf("1. Insert element\n"); 
        printf("2. Delete element\n"); 
        printf("3. Search element\n"); 
        printf("4. Preorder Traversal\n");
        printf("5. Inorder Traversal\n");
        printf("6. Postorder Traversal\n");
        printf("7. Display max height\n");
        printf("8. Exit\n"); 
    while (1) { 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        switch (choice) { 
            case 1: 
                printf("Enter the element to insert: "); 
                scanf("%d", &value); 
                root = insert(root, value); 
                printf("Element %d inserted successfully!\n", value); 
                break; 
            case 2: 
                printf("Enter the element to delete: "); 
                scanf("%d", &value); 
                root = deleteNode(root, value); 
                printf("Element %d deleted successfully!\n", value); 
                break;
            case 3: 
                printf("Enter the element to search: "); 
                scanf("%d", &value); 
                struct Node *result = search(root, value); 
                if (result != NULL) 
                    printf("Element %d found in the tree.\n", value); 
                else 
                    printf("Element %d not found in the tree.\n", value); 
                break; 
            case 4: 
                printf("Preorder traversal of the AVL tree: "); 
                preOrder(root); 
                printf("\n"); 
                break; 
            case 5: 
                printf("Inorder traversal of the AVL tree: "); 
                inOrder(root); 
                printf("\n"); 
                break; 
            case 6: 
                printf("Postorder traversal of the AVL tree: "); 
                postOrder(root); 
                printf("\n"); 
                break; 
            case 7:
                printf("Max height of the AVL tree: %d", maxheight(root));
                printf("\n");
                break;
            case 8: 
                exit(0); 
            default: 
                printf("Invalid choice! Please enter a valid option.\n"); 
        } 
    } 
    return 0; 
}