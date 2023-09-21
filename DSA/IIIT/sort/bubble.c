#include <stdio.h>

void bubbleSort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
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
    int n;
    printf("enter no of elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    printf("array before sorting: \n");
    printArr(arr, n);
    bubbleSort(arr, n);
    printf("\narray after sorting: \n");
    printArr(arr, n);
}