#include <bits/stdc++.h> 

using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	int n = arr.size();
    int e = n - 1;
	int s = m+1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    reverseArray(arr,2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}