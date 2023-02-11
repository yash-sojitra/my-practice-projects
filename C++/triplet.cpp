#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
    vector<vector<int>> ans;
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == K){
                    vector<int> triplet;
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[k]);
                    ans.push_back(triplet);
                }
            }
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {10,5,5,5,2};

    
    
    return 0;
}