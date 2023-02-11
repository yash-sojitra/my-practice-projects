#include <stdio.h>
int main()
{
    int arr[10];
    int max = 0;

    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(i==0)
        {
            max = arr[i];
        }
    }

    printf("given array is :\n");

    for (int j = 0; j < 10; j++)
    {
        printf("%d\t", arr[j]);
    }

    printf("\nmaximum number from the array :");

    printf("\n%d\n", max);
    


    return 0;
}