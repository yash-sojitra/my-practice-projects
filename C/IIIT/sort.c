#include <stdio.h>

void selectionSort(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    
}

void insertionSort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while (j>=0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    } 
}

void printArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main()
{
    int arr[] = {2,4,5,6,3,6,7,8,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    //insertionSort(arr, n);

    printArr(arr, n);
    return 0;
}