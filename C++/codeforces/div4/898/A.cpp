#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        char abc[] = {'a','b','c'};
        string str;
        cin>>str;
        int flag = 0;
        for (int i = 0; i < 3; i++)
        {
            if(str[i] == abc[i]){
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}