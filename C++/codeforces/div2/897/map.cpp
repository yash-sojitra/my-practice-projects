#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, temp;
    cin>>n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"\t";
    }
    

    // sort(v.begin(), v.end(), greater<int>());

    // cout << "Sorted \n";
    // for (auto x : v)
    //     cout << x << " ";

    return 0;
}