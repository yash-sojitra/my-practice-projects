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

void printPtn3(int choice, int r)
{

    for (int i = 0; i <= r; i++)
    {
        int k = i + 1;
        for (int j = 0; j <= (2 * r); j++)
        {

            switch (choice)
            {
            case 0:
                if (j >= (r - i) && j <= (r + i))
                    printf("%c ", '*');
                else
                    printf("%c ", ' ');
                break;

            case 1:
                if (j >= (r - i) && j <= (r + i))
                {
                    printf("%d ", k);

                    if (j < r)
                        k++;
                    else
                        k--;
                }
                else
                    printf("%c ", ' ');
                break;
            }
        }
        k++;
        printf("\n");
    }
}