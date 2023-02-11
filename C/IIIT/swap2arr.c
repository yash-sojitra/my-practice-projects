#include <stdio.h>

void printArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[10] = {10,9,8,7,6,5,4,3,2,1};

    int n = 10;

    printf("initially 2 array are : \n");
    printf("arr1 :");
    printArr(arr1,n);
    printf("\n");
    printf("arr2 :");
    printArr(arr2,n);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        int temp = arr2[i];
        arr2[i] = arr1[i];
        arr1[i] = temp;
    }

    printf("\nfinally 2 array are : \n");
    printf("arr1 :");
    printArr(arr1,n);
    printf("\n");
    printf("arr2 :");
    printArr(arr2,n);
    

    return 0;
}