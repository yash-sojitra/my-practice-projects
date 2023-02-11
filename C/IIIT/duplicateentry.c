#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
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

    int arr[10] = {8, 4, 6, 5, 7, 2, 5, 4, 9, 3};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        int key = arr[i];

        for (int j = i+1; j < n; j++)
        {
            if(arr[j] == key)
            {
                printf("%d ", key);
            }
        }
        
    }

    return 0;
}