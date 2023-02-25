#include <stdio.h>
void selectionSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void main(){
    int arr1[] = {1, 3, 4, 6, 7, 9, 10, 13, 15, 18}, arr2[] = {2, 5, 7, 9, 11, 15, 16, 21};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int ans[n1 + n2];
    for (int i = 0; i < n1; i++)
        ans[i] = arr1[i];
    for (int j = 0; j < n2; j++)
        ans[n1 + j] = arr2[j];   
    selectionSort(ans,(n1+n2));
    for (int k = 0; k < (n1+n2); k++)
        printf("%d ", ans[k]);
}