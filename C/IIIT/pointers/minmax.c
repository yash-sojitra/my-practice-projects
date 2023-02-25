#include <stdio.h>

void minmax(int *min, int *max, int arr[], int n)
{
    *min = *max = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i]>*max)
            *max = arr[i];
        else if(arr[i]<*min)
            *min = arr[i];

    }
}

int main()
{
    int arr[10] = {4,7,3,6,3,5,7,9,6,4};
    int min, max;

    minmax(&min,&max,arr,10);

    printf("the min and max values from the array are :\n\nmax: %d\nmin: %d\n", max,min);

    return 0;
}