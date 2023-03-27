#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number of elements in array: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    printf("enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ++n;
    ptr = realloc(ptr, (n) * sizeof(int));
    int val;
    printf("enter the new value:\n");
    scanf("%d", &ptr[n - 1]);

    for (int j = 0; j < n; j++)
    {
        printf("%d ", ptr[j]);
    }

    return 0;
}