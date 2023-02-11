#include <stdio.h>

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr1[] = {2, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 6, 7, 8, 8, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n = n1 + n2;
    int ans[n];

    int i = 0, j = 0,k = 0;

    while(i<n1)
    {
        if (i < n1 && j < n2)
        {
            if (arr1[i] > arr2[j])
            {
                ans[k] = arr1[j];
                j++;
            }
            if (arr1[i] < arr2[j])
            {
                ans[k] = arr1[i];
                i++;
            }
            else
            {
                ans[k] = arr1[i];
                i++;
            }
        }
        else if(i==n1)
        {
            i=n1-1;
        }
        else if(j==n2)
        {
            j = n2-1;
        }
    }

    return 0;
}