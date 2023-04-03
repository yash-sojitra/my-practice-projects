#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    printf("enter number of elements in array: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);
    while (1){
        int choice;
        int index;
        printf("\n\n-->Update Operations\n\n1.Insert\n2.Delete\n3.Update\n4.Search\n5.Traverse\n6.Exit\n\n");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            n++;
            printf("enter index number at which you want to insert: \n");
            scanf("%d",&index);
            ptr = realloc(ptr, (n) * sizeof(int));
            for (int i = n; i > index; i--)
                ptr[i] = ptr[i-1];
            int val;
            printf("enter the new value:\n");
            scanf("%d", &ptr[index]);
            break;
        case 2:
            printf("enter index number which you want to remove: \n");
            scanf("%d",&index);
            for (int i = index; i < n-1; i++)
                ptr[i]= ptr[i+1];
            n--;
            ptr = realloc(ptr, (n) * sizeof(int));
            break;
        case 3:
            printf("enter index number which you want to update: \n");
            scanf("%d",&index);
            printf("enter the new value: \n");
            scanf("%d",&ptr[index]);
            break;
        case 4:
            int value;
            printf("enter number which you want to search: \n");
            scanf("%d",&value);
            printf("element '%d' is present at index no: ",value);
            for (int i = 0; i < n; i++){
                if (ptr[i]==value)
                    printf("%d ", i);
            }
            break;
        case 5:
            printf("\nthe array is: \n");
            for (int j = 0; j < n; j++)
                printf("%d ", ptr[j]);
            break;
        default:
            break;
        }
        if (choice == 6)
            break;
    }
}