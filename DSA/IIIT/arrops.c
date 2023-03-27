#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number of elements in array: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    printf("enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    while (1)
    {
        int choice;
        printf("\nthe array is: \n");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ptr[j]);
        }
        printf("\n\n-->Update Operations\n\n1.Insert\n2.Delete\n3.Update\n4.Search\n5.Traverse\n6.Exit\n\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            n++;
            ptr = realloc(ptr, (n) * sizeof(int));
            int val;
            printf("enter the new value:\n");
            scanf("%d", &ptr[n - 1]);
            break;

        case 2:
            int index;
            printf("enter index number which you want to remove: \n");
            scanf("%d",&index);
            for (int i = index; i < n-1; i++)
            {
                ptr[i]= ptr[i+1];
            }
            n--;
            ptr = realloc(ptr, (n) * sizeof(int));
            break;

        case 3:
            int index2;
            printf("enter index number which you want to update: \n");
            scanf("%d",&index2);
            printf("enter the new value: \n");
            scanf("%d",&ptr[index2]);
            break;

        case 4:
            int value;
            printf("enter number which you want to search: \n");
            scanf("%d",&value);
            printf("element '%d' is present at index no: ",value);
            for (int i = 0; i < n; i++)
            {
                if (ptr[i]==value)
                    printf("%d ", i);
            }
            break;

        default:
            break;
        }

        if (choice == 6)
            break;
    }

    printf("\nthe array is: \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", ptr[j]);
    }

    return 0;
}