#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heap_sort(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
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
    heap_sort(arr, n);
    printf("\narray after sorting: \n");
    printArr(arr, n);
    return 0;
}