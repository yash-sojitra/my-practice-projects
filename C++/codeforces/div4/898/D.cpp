#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        cin>>n>>x;
        string str;
        int op = 0;
        cin>>str;
        for (int i = 0; i < n;)
        {
            if(str[i] == 'B')
            {
                op++;
                i += x;
            }
            else{
                i++;
            }
        }
        cout<<op<<endl;   
    }
    return 0;
}