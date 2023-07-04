#include <stdio.h>
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main(){
    int n;
    printf("enter no of elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("array before sorting: \n");
    printArr(arr, n);
    insertionSort(arr, n);
    printf("\narray after sorting: \n");
    printArr(arr, n);
    return 0;
}