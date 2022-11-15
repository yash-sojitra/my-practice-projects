#include <stdio.h>
#include <string.h>

void arrRev(int *array, int length)
{

    for (int i = 0; i < (length / 2); i++)
    {
        int temp;

        temp = array[i];
        array[i] = array[(length - 1) - i];
        array[(length - 1) - i] = temp;
    }
}
void arrprint(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d", array[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = (sizeof(arr) / 4);
    printf("the number of terms in array is %d\n", len);

    arrprint(arr, len);
    arrRev(arr, len);
    arrprint(arr, len);

    return 0;
}
