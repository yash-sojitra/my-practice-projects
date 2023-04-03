#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node node;

int main()
{
    node one, two, three, four;

    node* start = &one;

    one.data = 1;
    one.next = &two;
    two.data = 2;
    two.next = &three;
    three.data = 3;
    three.next = &four;
    four.data = 4;
    four.next = NULL;

    node *t1 = NULL;

    while (start != NULL)
    {
        t1 = start;
        printf("%d ", t1->data);
        start = t1->next;
    }
    
    

    return 0;
}