#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int n,d,s,range = INT_MAX;
        cin>>n;
        for (int i = 0; i < n; i++){
            cin>>d>>s;
            //crrRange = d+(s/2);
            if(d+(s/2) < range)
                range = d+(s/2);
        }
        cout<<"-->"<<range<<endl;
    }  
    return 0;
}