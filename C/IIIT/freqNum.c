#include <stdio.h>
void main(){
    int n;
    printf("enter number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int num, count = 0;
    printf("enter number to find it's frequency: \n");
    scanf("%d", &num);
    for (int j = 0; j < n; j++)
    {
        if(arr[j] == num)
            count++;
    }
    printf("\nthe'%d' number came %d times in array", num, count);
}