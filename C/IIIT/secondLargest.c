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

int main()
{
    int arr[] = {8,4,6,5,10,6,7,2,5,4,9,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    int max = arr[n-1];

    int smax;

    for (int i = 0; i < n; i++)
    {
        if (arr[n-1-i]<max)
        {
            smax = arr[n-1-i];
            break;
        }
    }

    printf("\n%d", smax);

    return 0;
}