#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter number of elements in array: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);
    printf("\n\n-->Update Operations\n\n1.Insert\n2.Delete\n3.Update\n4.Search\n5.Traverse\n6.Exit\n\n");
    while (1){
        int choice;
        printf("choice--> ");
        int index;
        scanf("%d", &choice);
        switch (choice){
        case 1:
            n++;
            printf("enter index number at which you want to insert: \n");
            scanf("%d", &index);
            ptr = realloc(ptr, (n) * sizeof(int));
            for (int i = n; i > index; i--)
                ptr[i] = ptr[i - 1];
            int val;
            printf("enter the new value:\n");
            scanf("%d", &ptr[index]);
            break;
        case 2:
            printf("enter index number which you want to remove: \n");
            scanf("%d", &index);
            for (int i = index; i < n - 1; i++)
                ptr[i] = ptr[i + 1];
            n--;
            ptr = realloc(ptr, (n) * sizeof(int));
            break;
        case 3:
            printf("enter index number which you want to update: \n");
            scanf("%d", &index);
            printf("enter the new value: \n");
            scanf("%d", &ptr[index]);
            break;
        case 4:
            int value;
            int flag = 0;
            int i;
            printf("enter number which you want to search: \n");
            scanf("%d", &value);
            for (i = 0; i < n; i++){
                if (ptr[i] == value){
                    flag = 1;
                    break;
                }
            }
            if (flag){
                printf("element '%d' is present at index no: %d ", value, i);
            }else{
                printf("element '%d' is not present in array", value);
            }
            break;
        case 5:
            printf("\nthe array is: \n");
            for (int j = 0; j < n; j++)
                printf("%d -> '%d' \n", j, ptr[j]);
            break;
        default:
            break;
        }
        if (choice == 6)
            break;
    }
    return 0;
}