#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> arr2 = {2, 5, 6};

    int n = 3;

    int i = 0, j = 0;

    while (i<m && j<n)
    {
        if (arr1[i]>=arr2[j])
        {
            arr1.insert(arr1.begin()+i+1,arr2[j]);
            j++;
        }
        else if(arr1[i]<arr2[j] && i<m)
        {
            i++;
        }        
    }

    for (int k = 0; k < arr1.size(); k++)
    {
        cout<<arr1[k]<<" ";
    }
    
    return 0;
}