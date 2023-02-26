#include <stdio.h>

void pointerSwap(int *p1, int *p2)
{
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

int main()
{
    int a,b;
    printf("enter a,b :\n");
    scanf("%d,%d",&a,&b);

    pointerSwap(&a,&b);

    printf("a,b after swapping:\n%d,%d",a,b);

    return 0;
}