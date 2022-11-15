#include <stdio.h>

void addSub(int *a, int *b);

int main(int argc, char const *argv[])
{
    int a = 10, b = 3;

    printf("values of a and b are %d and %d\n\n", a, b);
    addSub(&a, &b);
    printf("now values of a and b are %d and %d\n", a, b);

    return 0;
}

void addSub(int *a, int *b)
{
    int add = *a + *b;
    int sub = *a - *b;

    *a = add;
    *b = sub;
}
