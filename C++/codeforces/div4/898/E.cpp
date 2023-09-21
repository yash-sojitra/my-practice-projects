#include <bits/stdc++.h>

using namespace std;

int waterBlock(int h, int n, int coral[]){

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int blocks = h - coral[i];
        if (blocks>=0)
            total+=blocks;
    }
    return total;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int coral[n];
        int max = 0;
        for (int i = 0; i < n; i++){
            cin>>coral[i];
        }
        int s = 0, e = x, mid = (s+e)/2;
        while (s<e)
        {
            cout<<1;
            if(waterBlock(mid,n,coral) == x){
                break;
            }
            else if(waterBlock(mid,n,coral) < x){
                s = mid;
            }
            else{
                e = mid - 1;
            }

            mid = (s+e)/2; 
        }
        cout<<mid<<endl;
    }
    return 0;
}