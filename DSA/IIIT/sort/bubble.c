#include <stdio.h>

void bubbleSort(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
    bubbleSort(arr, n);
    printf("\narray is: \n");
    printArr(arr,n);
    return 0;
}