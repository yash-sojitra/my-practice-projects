#include <stdio.h>
void selectionSort(int arr[],int n){
    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }   
}
void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
}
int main(){
    int arr1[] = {2,4,5,6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {3,6,7,8,8,9};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n = n1+n2;
    int ans[n];

    for(int i=0; i<n1; i++)
        ans[i] = arr1[i];

    for(int j=0; j<n2; j++)
        ans[n1+j] = arr2[j];

    selectionSort(ans,n);

    printArr(ans,n);
    return 0;
}