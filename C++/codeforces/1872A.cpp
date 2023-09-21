#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        float a,b,c;
        cin>>a>>b>>c;
        float diff = (abs(a-b))/2;
        float op = ceil(diff/c);
        cout<<op<<endl;
    }
    return 0;
}