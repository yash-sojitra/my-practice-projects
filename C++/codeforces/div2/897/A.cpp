#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        cin >> n;
        vector<int> arr;
        map<int, int> map1;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            arr.push_back(temp);
            map1[i] = arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(map1[j] == arr[i]){
                    map1[j] = i+1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<map1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}