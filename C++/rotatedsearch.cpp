#include <iostream>
#include <bits/stdc++.h> 

using namespace std;


int binarySearch(vector<int>& arr ,int s, int e, int k)
{    
    int mid = s +(e-s)/2;
    
    while(s<=e)
    {
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}

int pivotElement(vector<int>& arr, int n)
{
    int s = 0;
    int e = n-1;
    
    int mid = s +(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else if(arr[mid] < arr[0])
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = pivotElement(arr , n);
    cout<<pivot<<endl;
    
    int keyIndex = -1;
    
    if(arr[pivot] <= k && k<= arr[n-1])
    {
        //binary search on II
        keyIndex = binarySearch(arr,pivot,(n-1),k);
    }
    else{
        //binary search on I
        keyIndex = binarySearch(arr,0,(pivot-1),k);
    }

    return keyIndex;
}



int main()
{
    
    vector<int> arr = {10,1,2,5,6};
    
    cout << findPosition(arr,5,10) << endl;

    return 0;
}