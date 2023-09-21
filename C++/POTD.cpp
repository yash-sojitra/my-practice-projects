//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

long long fact(int n){
    long long ans = 1;
    for(int i = 1; i<=n; i++){
        ans = ans *i;
    }
    return ans;
}

class Solution{
public:
    int nCr(int n, int r){
        // code here
        cout<<fact(n)<<"|"<<fact(r)<<"|"<<fact(n-r)<<endl;
        long ans = fact(n)/(fact(r)*fact(n-r));
        return int(ans);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends