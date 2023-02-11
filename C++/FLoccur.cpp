#include <iostream>

using namespace std;

int firstOccurence(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,2,2,4,5,7,8};
    cout<<firstOccurence(arr,8,2)<<" "<<lastOccurence(arr,8,2)<<endl;
    cout<<"no of '2's are : "<<(lastOccurence(arr,8,2)-firstOccurence(arr,8,2))+1<<endl;
    return 0;
}