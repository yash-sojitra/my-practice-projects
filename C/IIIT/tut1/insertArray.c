#include <stdio.h>

void main()
{
    int arr[100], n,ans;
    printf("enter number of elements:\n");
    scanf("%d", &n);
    printf("enter elements in increasing order:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        int new;
        printf("enter the value of the element:\n");
        scanf("%d", &new);
        for (int i = 0; i < n; i++)
        {
            if (new < arr[i])
            {
                for (int j = n; j > i; j--)
                {
                    arr[j + 1] = arr[j];
                }
                arr[i-1] = new;
            }
        }
        printf("do you want to enter one more element(1/0):\n");
        scanf("%d", &ans);
        n++;
    } while (ans == 1);
    printf("final array is:\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}

// void insert(int arr[], int size, int value);

// int main() {
//     int arr[] = {1, 2, 4, 5, 6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int value = 3;

//     insert(arr, size, value);

//     for (int i = 0; i < size + 1; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// void insert(int arr[], int size, int value) {
//     int i, j;
//     for (i = 0; i < size; i++) {
//         if (arr[i] > value) {
//             break;
//         }
//     }

//     for (j = size - 1; j >= i; j--) {
//         arr[j + 1] = arr[j];
//     }

//     arr[i] = value;
// }