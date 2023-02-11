#include <stdio.h>
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

    printArr(ans,n);
    return 0;
}