#include <iostream>

using namespace std;

int pivotElement(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    int mid = (start + size) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return mid;
}

int main()
{

    int arr[] = {10,1,2,5,6};

    cout << pivotElement(arr, 5);

    return 0;
}

// int binarySearch_I(vector<int>& arr, int n, int k)
// {
//     int s = 0;
//     int e = n-1;
    
//     int mid = s +(e-s)/2;
//     while(s<e)
//     {
//         if(arr[mid == k]){
//             return mid;
//         }
//         else if(arr[mid]>k){
//             e = mid-1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//    return -1; 
// }