#include <stdio.h>

int sort(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(arr+j) < *(arr+i))
            {
                *(arr+i) =*(arr+i) + *(arr+j);
                *(arr+j) =*(arr+i) - *(arr+j);
                *(arr+i) =*(arr+i) - *(arr+j);
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
    int arr[10] = {4,7,3,6,3,5,7,9,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);  
    printf("array before sorting :\n");
    printArr(arr,n);
    sort(&arr[0],n);
    printf("\narray after sorting :\n");
    printArr(arr,n);


    return 0;
}