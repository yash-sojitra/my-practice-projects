#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {2, 4, 5, 6, 3, 6, 7, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("initial array is: \n");
    printArr(arr,n);
    selectionSort(arr, n);
    printf("\nsorted array is: \n");
    printArr(arr,n);
    return 0;
}